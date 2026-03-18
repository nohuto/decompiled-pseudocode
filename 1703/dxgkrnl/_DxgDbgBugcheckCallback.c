/*
 * XREFs of _DxgDbgBugcheckCallback @ 0x1C00354A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0036094 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

void __fastcall DxgDbgBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // ecx
  __int128 v8; // xmm0
  unsigned int v9; // eax
  unsigned int v10; // edx
  void *v11; // rcx
  void *v12; // rax

  if ( Reason != KbCallbackSecondaryDumpData )
    return;
  if ( KiBugCheckData == 159 )
  {
    ReasonSpecificData[1] = xmmword_1C006FE98;
    v12 = operator new(0x1000uLL, KiBugCheckData - 159, 1, (enum _POOL_TYPE)512);
    *((_QWORD *)ReasonSpecificData + 4) = v12;
    v10 = 4096;
    v11 = v12;
LABEL_15:
    *((_DWORD *)ReasonSpecificData + 10) = TdrCollectBugcheckSecondaryDumpData(v11, v10, 0);
    return;
  }
  if ( KiBugCheckData != 278 || !qword_1C0070E98 )
  {
    v6 = *((_QWORD *)ReasonSpecificData + 4) == 0LL;
    ReasonSpecificData[1] = xmmword_1C006FE98;
    if ( v6 )
    {
      v10 = *((_DWORD *)ReasonSpecificData + 3);
      v11 = 0LL;
    }
    else
    {
      v11 = *(void **)ReasonSpecificData;
      v10 = *((_DWORD *)ReasonSpecificData + 2);
      *((_QWORD *)ReasonSpecificData + 4) = *(_QWORD *)ReasonSpecificData;
    }
    goto LABEL_15;
  }
  v5 = (unsigned int)(dword_1C0070E94 - 1);
  if ( dword_1C0070E94 != 1 )
  {
    do
    {
      if ( *(_BYTE *)(v5 + qword_1C0070E98) )
        break;
      v6 = (_DWORD)v5 == 1;
      v5 = (unsigned int)(v5 - 1);
    }
    while ( !v6 );
  }
  v7 = v5 + 1;
  v8 = xmmword_1C006FE98;
  *((_QWORD *)ReasonSpecificData + 4) = qword_1C0070E98;
  v9 = *((_DWORD *)ReasonSpecificData + 3);
  ReasonSpecificData[1] = v8;
  if ( v7 < v9 )
    v9 = v7;
  *((_DWORD *)ReasonSpecificData + 10) = v9;
}
