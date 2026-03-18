/*
 * XREFs of ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0007440
 * Callers:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0007670 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0001288 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0001348 (-IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z @ 0x1C00076A4 (-CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z.c)
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000772C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  struct _DXGK_DIAG_HEADER *v7; // rsi
  unsigned int v8; // r12d
  int v9; // r8d
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdx
  int v12; // r13d
  unsigned int v13; // eax
  char *v14; // r14
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int i; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int IsPersistentPacket; // eax
  int v31; // r8d
  unsigned int v32; // edx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-89h] BYREF
  char *v36; // [rsp+28h] [rbp-81h]
  __m128i v37[3]; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v38[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v39; // [rsp+68h] [rbp-41h]
  __m128i v40; // [rsp+70h] [rbp-39h]
  __m128i v41; // [rsp+80h] [rbp-29h]
  _QWORD v42[7]; // [rsp+90h] [rbp-19h] BYREF

  memset(v42, 0, sizeof(v42));
  if ( !a2 )
    return 2147483653LL;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)this + 4);
  if ( v4 >= v5 || v4 < 0x30 )
    return 2147483653LL;
  v6 = *((_DWORD *)this + 6);
  v7 = a2;
  v8 = *((_DWORD *)this + 5);
  v9 = *(_DWORD *)a2;
  v10 = v6 + v5;
  v11 = (unsigned __int64)this;
  if ( v8 <= v6 )
    v10 = *((_DWORD *)this + 6);
  v12 = 0;
  LODWORD(v36) = 0;
  v13 = 0;
  v35 = v10;
  while ( v9 != *(_DWORD *)v11 )
  {
    ++v13;
    v11 += 16LL;
    if ( v13 )
    {
      v14 = v36;
      goto LABEL_10;
    }
  }
  v14 = (char *)this + 16 * v13;
  LODWORD(v36) = 1;
  v11 = *((_QWORD *)v14 + 1);
  if ( v11 )
  {
    if ( v4 == *(_DWORD *)(v11 + 4) )
    {
      v10 = v35;
      if ( RtlCompareMemory((char *)a2 + 48, (const void *)(v11 + 48), v4 - 48) == v4 - 48 )
      {
        v24 = *((_QWORD *)a2 + 1);
        v7 = (struct _DXGK_DIAG_HEADER *)v42;
        LODWORD(v36) = 0;
        v42[1] = v24;
        v25 = *((_QWORD *)v14 + 1);
        v42[0] = 0x380000001CLL;
        LODWORD(v42[6]) = *(_DWORD *)(v25 + 40);
      }
    }
  }
LABEL_10:
  v15 = *((_DWORD *)v7 + 1) + v10 - v8 + 48LL;
  if ( v15 >= *((unsigned int *)this + 4) )
  {
    while ( 1 )
    {
      memset(v37, 0, sizeof(v37));
      v35 = 48;
      v12 = DXGDIAGNOSTICS::ReadDiagnostics(this, (unsigned __int8 *)v37, &v35);
      if ( v12 < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
        v34[3] = v8;
        v34[4] = v7;
        v34[5] = *((unsigned int *)v7 + 1);
        WdLogEvent5_WdWarning(v34);
        goto LABEL_11;
      }
      if ( (unsigned int)DXGDIAGNOSTICS::IsPersistentPacket(
                           this,
                           (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 4) + *((unsigned int *)this + 5))) )
        break;
      v8 += v37[0].m128i_u32[1];
      v11 = (v23 + v37[0].m128i_i32[1]) % (unsigned int)v22;
      *((_DWORD *)this + 5) = v11;
      v15 = *((_DWORD *)v7 + 1) + v10 - v8 + 48LL;
      if ( v15 < v22 )
        goto LABEL_11;
    }
    v39 = v37[0].m128i_i64[1];
    v38[1] = v8 + v22 - v10;
    v38[0] = 27;
    v40 = v37[1];
    v41 = v37[2];
    v41.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v37[2], 8)) - 1;
    DXGDIAGNOSTICS::CopyToBuffer(this, (struct _DXGK_DIAG_HEADER *)v38, 1);
    for ( i = *((_DWORD *)this + 5); ; i = v32 )
    {
      v35 = 48;
      if ( (int)DXGDIAGNOSTICS::ReadDiagnostics(this, (unsigned __int8 *)v37, &v35) < 0 )
        break;
      IsPersistentPacket = DXGDIAGNOSTICS::IsPersistentPacket(
                             this,
                             (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 4) + *((unsigned int *)this + 5)));
      v32 = (unsigned int)(v31 + v37[0].m128i_i32[1]) % *((_DWORD *)this + 4);
      *((_DWORD *)this + 5) = v32;
      if ( !IsPersistentPacket )
        goto LABEL_29;
    }
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
    v33[3] = v8;
    v33[4] = v7;
    v33[5] = *((unsigned int *)v7 + 1);
    WdLogEvent5_WdWarning(v33);
LABEL_29:
    *((_DWORD *)this + 6) = i;
    return 3221226029LL;
  }
  else
  {
LABEL_11:
    if ( v12 < 0 )
    {
      *(_QWORD *)((char *)this + 20) = 0LL;
      return (unsigned int)v12;
    }
    else
    {
      *((_DWORD *)v7 + 10) = (*((_DWORD *)this + 7))++;
      *((_DWORD *)v7 + 11) = WdLogGetEventOrder(v15, v11);
      v16 = *((_QWORD *)this + 4) + *((unsigned int *)this + 6);
      v17 = DXGDIAGNOSTICS::CopyToBuffer(this, v7, 0);
      if ( (_DWORD)v36 )
      {
        if ( !v17 )
          *((_QWORD *)v14 + 1) = v16;
      }
      WriteDxgDiagnosticsEvent(a2);
      return 0LL;
    }
  }
}
