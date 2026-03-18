/*
 * XREFs of MiLogStrongCodeDriverLoadFailure @ 0x1406B58F4
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1406BD5E4 (MiProcessKernelCfgImageLoadConfig.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiLogStrongCodeDriverLoadFailure(const CHAR *Src, __int64 a2)
{
  __int64 v4; // rax
  ULONG64 v5; // r8
  TraceLoggingHProvider v6; // r9
  __int64 v7; // rdi
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rbx
  void *v10; // rcx
  __int64 *v11; // rax
  const GUID *v12; // [rsp+20h] [rbp-79h]
  const GUID *v13; // [rsp+28h] [rbp-71h]
  int v14; // [rsp+40h] [rbp-59h] BYREF
  int v15; // [rsp+44h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  _DWORD *v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  __int64 v21; // [rsp+90h] [rbp-9h]
  _DWORD v22[2]; // [rsp+98h] [rbp-1h] BYREF
  int *v23; // [rsp+A0h] [rbp+7h]
  int v24; // [rsp+A8h] [rbp+Fh]
  int v25; // [rsp+ACh] [rbp+13h]
  int *v26; // [rsp+B0h] [rbp+17h]
  int v27; // [rsp+B8h] [rbp+1Fh]
  int v28; // [rsp+BCh] [rbp+23h]

  if ( qword_14036CFD8 )
  {
    if ( qword_14036CFD8->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(qword_14036CFD8, 0x400000000000uLL) )
      {
        v14 = *(_DWORD *)(a2 + 120);
        v15 = *(_DWORD *)(a2 + 156);
        TlgCreateSz(&pDesc, Src);
        v4 = *(_QWORD *)(a2 + 96);
        v20 = 0;
        v22[1] = 0;
        v25 = 0;
        v28 = 0;
        v21 = v4;
        v22[0] = *(unsigned __int16 *)(a2 + 88);
        v23 = &v14;
        v18 = v22;
        v26 = &v15;
        v19 = 2;
        v24 = 4;
        v27 = 4;
        TlgWriteEx(v6, &unk_1402AC719, v5, (ULONG)v6, v12, v13, 7u, &pData);
      }
    }
  }
  else
  {
    v7 = -1LL;
    do
      ++v7;
    while ( Src[v7] );
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7 + *(unsigned __int16 *)(a2 + 88) + 49LL, 0x46446D4Du);
    v9 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = PoolWithTag + 6;
      memmove(PoolWithTag + 6, Src, v7 + 1);
      v10 = (void *)(v9 + v7 + 49);
      *(_QWORD *)(v9 + 32) = v10;
      memmove(v10, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *(_WORD *)(v9 + 24) = *(_WORD *)(a2 + 88);
      *(_WORD *)(v9 + 26) = *(_WORD *)(a2 + 88);
      *(_DWORD *)(v9 + 40) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(v9 + 44) = *(_DWORD *)(a2 + 156);
      v11 = (__int64 *)qword_14036C0B0;
      if ( *(PVOID **)qword_14036C0B0 != &qword_14036C0A8 )
        __fastfail(3u);
      *(_QWORD *)v9 = &qword_14036C0A8;
      *(_QWORD *)(v9 + 8) = v11;
      *v11 = v9;
      qword_14036C0B0 = v9;
    }
  }
}
