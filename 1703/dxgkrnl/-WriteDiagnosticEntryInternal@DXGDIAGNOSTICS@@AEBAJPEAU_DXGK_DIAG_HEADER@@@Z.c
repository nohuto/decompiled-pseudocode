/*
 * XREFs of ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000BE24
 * Callers:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C04C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z @ 0x1C000BFC8 (-CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z.c)
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00367E8 (-IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0036810 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // r13d
  struct _DXGK_DIAG_HEADER *v7; // rsi
  unsigned int v8; // r12d
  DXGDIAGNOSTICS *v9; // rdx
  unsigned int v10; // ecx
  char *v11; // r15
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r9d
  unsigned __int64 v24; // r8
  unsigned int i; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int IsPersistentPacket; // eax
  int v31; // r9d
  unsigned int v32; // edx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-89h] BYREF
  char *v36; // [rsp+28h] [rbp-81h]
  __m128i v37[3]; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v38[2]; // [rsp+60h] [rbp-49h] BYREF
  __m128i v39; // [rsp+80h] [rbp-29h]
  _QWORD v40[7]; // [rsp+90h] [rbp-19h] BYREF

  memset(v40, 0, sizeof(v40));
  if ( !a2 )
    return 2147483653LL;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)this + 4);
  if ( v4 >= v5 || v4 < 0x30 )
    return 2147483653LL;
  v6 = *((_DWORD *)this + 5);
  v7 = a2;
  v8 = *((_DWORD *)this + 6);
  if ( v6 > v8 )
    v8 += v5;
  LODWORD(v36) = 0;
  v9 = this;
  v10 = 0;
  while ( *(_DWORD *)a2 != *(_DWORD *)v9 )
  {
    ++v10;
    v9 = (DXGDIAGNOSTICS *)((char *)v9 + 16);
    if ( v10 )
    {
      v11 = v36;
      goto LABEL_10;
    }
  }
  v11 = (char *)this + 16 * v10;
  LODWORD(v36) = 1;
  v9 = (DXGDIAGNOSTICS *)*((_QWORD *)v11 + 1);
  if ( v9 && v4 == *((_DWORD *)v9 + 1) && RtlCompareMemory((char *)a2 + 48, (char *)v9 + 48, v4 - 48) == v4 - 48 )
  {
    v16 = *((_QWORD *)a2 + 1);
    v7 = (struct _DXGK_DIAG_HEADER *)v40;
    LODWORD(v36) = 0;
    v40[1] = v16;
    v17 = *((_QWORD *)v11 + 1);
    v40[0] = 0x380000001CLL;
    LODWORD(v40[6]) = *(_DWORD *)(v17 + 40);
  }
LABEL_10:
  v12 = v8 + *((_DWORD *)v7 + 1) - v6 + 48LL;
  if ( v12 >= *((unsigned int *)this + 4) )
  {
    while ( 1 )
    {
      memset(v37, 0, sizeof(v37));
      v35 = 48;
      v20 = DXGDIAGNOSTICS::ReadDiagnostics(this, (unsigned __int8 *)v37, &v35);
      if ( v20 < 0 )
        break;
      if ( (unsigned int)DXGDIAGNOSTICS::IsPersistentPacket(
                           this,
                           (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 4) + *((unsigned int *)this + 5))) )
      {
        v38[0] = v37[0];
        LODWORD(v38[0]) = 27;
        v38[1] = v37[1];
        v39 = v37[2];
        v39.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v37[2], 8)) - 1;
        DWORD1(v38[0]) = v6 + *((_DWORD *)this + 4) - v8;
        DXGDIAGNOSTICS::CopyToBuffer(this, (struct _DXGK_DIAG_HEADER *)v38, 1);
        for ( i = *((_DWORD *)this + 5); ; i = v32 )
        {
          v35 = 48;
          if ( DXGDIAGNOSTICS::ReadDiagnostics(this, (unsigned __int8 *)v37, &v35) < 0 )
            break;
          IsPersistentPacket = DXGDIAGNOSTICS::IsPersistentPacket(
                                 this,
                                 (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 4) + *((unsigned int *)this + 5)));
          v32 = (unsigned int)(v31 + v37[0].m128i_i32[1]) % *((_DWORD *)this + 4);
          *((_DWORD *)this + 5) = v32;
          if ( !IsPersistentPacket )
            goto LABEL_28;
        }
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
        v33[3] = v6;
        v33[4] = v7;
        v33[5] = *((unsigned int *)v7 + 1);
        WdLogEvent5_WdWarning(v33);
LABEL_28:
        *((_DWORD *)this + 6) = i;
        return 3221226029LL;
      }
      v12 = v37[0].m128i_u32[1];
      HIDWORD(v9) = 0;
      v24 = *((unsigned int *)this + 4);
      v6 += v37[0].m128i_u32[1];
      LODWORD(v9) = (v23 + v37[0].m128i_i32[1]) % (unsigned int)v24;
      *((_DWORD *)this + 5) = (_DWORD)v9;
      if ( (unsigned __int64)(v8 + *((_DWORD *)v7 + 1) - v6) + 48 < v24 )
        goto LABEL_30;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v21, v22);
    v34[3] = v6;
    v34[4] = v7;
    v34[5] = *((unsigned int *)v7 + 1);
    WdLogEvent5_WdWarning(v34);
LABEL_30:
    if ( v20 >= 0 )
      goto LABEL_11;
    *((_DWORD *)this + 6) = 0;
    result = (unsigned int)v20;
    *((_DWORD *)this + 5) = 0;
  }
  else
  {
LABEL_11:
    *((_DWORD *)v7 + 10) = (*((_DWORD *)this + 7))++;
    *((_DWORD *)v7 + 11) = WdLogGetEventOrder(v12, v9);
    v13 = *((_QWORD *)this + 4) + *((unsigned int *)this + 6);
    v14 = DXGDIAGNOSTICS::CopyToBuffer(this, v7, 0);
    if ( (_DWORD)v36 )
    {
      if ( !v14 )
        *((_QWORD *)v11 + 1) = v13;
    }
    WriteDxgDiagnosticsEvent(a2);
    return 0LL;
  }
  return result;
}
