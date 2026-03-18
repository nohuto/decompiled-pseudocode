/*
 * XREFs of ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009748
 * Callers:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009970 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00099A4 (-IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z @ 0x1C00099CC (-CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0009A80 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009B58 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r8
  int v20; // r9d
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int i; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int IsPersistentPacket; // eax
  int v29; // r9d
  unsigned int v30; // edx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // [rsp+20h] [rbp-89h] BYREF
  char *v34; // [rsp+28h] [rbp-81h]
  __m128i v35[3]; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v36[2]; // [rsp+60h] [rbp-49h] BYREF
  __m128i v37; // [rsp+80h] [rbp-29h]
  _QWORD v38[7]; // [rsp+90h] [rbp-19h] BYREF

  memset(v38, 0, sizeof(v38));
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
  LODWORD(v34) = 0;
  v9 = this;
  v10 = 0;
  while ( *(_DWORD *)a2 != *(_DWORD *)v9 )
  {
    ++v10;
    v9 = (DXGDIAGNOSTICS *)((char *)v9 + 16);
    if ( v10 )
    {
      v11 = v34;
      goto LABEL_10;
    }
  }
  v11 = (char *)this + 16 * v10;
  LODWORD(v34) = 1;
  v9 = (DXGDIAGNOSTICS *)*((_QWORD *)v11 + 1);
  if ( v9 && v4 == *((_DWORD *)v9 + 1) && RtlCompareMemory((char *)a2 + 48, (char *)v9 + 48, v4 - 48) == v4 - 48 )
  {
    v22 = *((_QWORD *)a2 + 1);
    v7 = (struct _DXGK_DIAG_HEADER *)v38;
    LODWORD(v34) = 0;
    v38[1] = v22;
    v23 = *((_QWORD *)v11 + 1);
    v38[0] = 0x380000001CLL;
    LODWORD(v38[6]) = *(_DWORD *)(v23 + 40);
  }
LABEL_10:
  v12 = v8 + *((_DWORD *)v7 + 1) - v6 + 48LL;
  if ( v12 >= *((unsigned int *)this + 4) )
  {
    while ( 1 )
    {
      memset(v35, 0, sizeof(v35));
      v33 = 48;
      v18 = DXGDIAGNOSTICS::ReadDiagnostics(this, (unsigned __int8 *)v35, &v33);
      if ( v18 < 0 )
        break;
      if ( (unsigned int)DXGDIAGNOSTICS::IsPersistentPacket(
                           this,
                           (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 4) + *((unsigned int *)this + 5))) )
      {
        v36[0] = v35[0];
        LODWORD(v36[0]) = 27;
        v36[1] = v35[1];
        v37 = v35[2];
        v37.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v35[2], 8)) - 1;
        DWORD1(v36[0]) = v6 + *((_DWORD *)this + 4) - v8;
        DXGDIAGNOSTICS::CopyToBuffer(this, (struct _DXGK_DIAG_HEADER *)v36, 1);
        for ( i = *((_DWORD *)this + 5); ; i = v30 )
        {
          v33 = 48;
          if ( DXGDIAGNOSTICS::ReadDiagnostics(this, (unsigned __int8 *)v35, &v33) < 0 )
            break;
          IsPersistentPacket = DXGDIAGNOSTICS::IsPersistentPacket(
                                 this,
                                 (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 4) + *((unsigned int *)this + 5)));
          v30 = (unsigned int)(v29 + v35[0].m128i_i32[1]) % *((_DWORD *)this + 4);
          *((_DWORD *)this + 5) = v30;
          if ( !IsPersistentPacket )
            goto LABEL_29;
        }
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
        v31[3] = v6;
        v31[4] = v7;
        v31[5] = *((unsigned int *)v7 + 1);
        WdLogEvent5_WdWarning(v31);
LABEL_29:
        *((_DWORD *)this + 6) = i;
        return 3221226029LL;
      }
      v12 = v35[0].m128i_u32[1];
      HIDWORD(v9) = 0;
      v21 = *((unsigned int *)this + 4);
      v6 += v35[0].m128i_u32[1];
      LODWORD(v9) = (v20 + v35[0].m128i_i32[1]) % (unsigned int)v21;
      *((_DWORD *)this + 5) = (_DWORD)v9;
      if ( (unsigned __int64)(v8 + *((_DWORD *)v7 + 1) - v6) + 48 < v21 )
        goto LABEL_16;
    }
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v19);
    v32[3] = v6;
    v32[4] = v7;
    v32[5] = *((unsigned int *)v7 + 1);
    WdLogEvent5_WdWarning(v32);
LABEL_16:
    if ( v18 >= 0 )
      goto LABEL_11;
    *((_DWORD *)this + 6) = 0;
    result = (unsigned int)v18;
    *((_DWORD *)this + 5) = 0;
  }
  else
  {
LABEL_11:
    *((_DWORD *)v7 + 10) = (*((_DWORD *)this + 7))++;
    *((_DWORD *)v7 + 11) = WdLogGetEventOrder(v12, v9);
    v13 = *((_QWORD *)this + 4) + *((unsigned int *)this + 6);
    v14 = DXGDIAGNOSTICS::CopyToBuffer(this, v7, 0);
    if ( (_DWORD)v34 )
    {
      if ( !v14 )
        *((_QWORD *)v11 + 1) = v13;
    }
    WriteDxgDiagnosticsEvent(a2);
    return 0LL;
  }
  return result;
}
