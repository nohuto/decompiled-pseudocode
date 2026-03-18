/*
 * XREFs of DxgkNetDispGetNextChunkInfo @ 0x1C017C700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C0040048 (DxgkMiracastGetNextChunkInfo.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkNetDispGetNextChunkInfo(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        ULONG64 a5,
        char *a6,
        __int64 a7)
{
  __int64 v8; // rbx
  struct D3DKMT_MIRACAST_CHUNK_DATA *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  unsigned int *v16; // rax
  SIZE_T v17; // r14
  unsigned int v18; // ecx
  __int64 v19; // rsi
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _DWORD *v25; // r13
  _DWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  char *v32; // rdx
  __int64 i; // rsi
  PVOID v34; // rcx
  unsigned int v36; // [rsp+30h] [rbp-1C8h] BYREF
  NTSTATUS v37; // [rsp+34h] [rbp-1C4h]
  int v38; // [rsp+3Ch] [rbp-1BCh]
  unsigned int v39; // [rsp+40h] [rbp-1B8h]
  unsigned int v40; // [rsp+44h] [rbp-1B4h] BYREF
  struct D3DKMT_MIRACAST_CHUNK_DATA *v41; // [rsp+48h] [rbp-1B0h]
  ULONG64 v42; // [rsp+50h] [rbp-1A8h]
  __int64 v43; // [rsp+58h] [rbp-1A0h]
  PVOID Object; // [rsp+60h] [rbp-198h] BYREF
  __int64 v45[5]; // [rsp+68h] [rbp-190h] BYREF
  PVOID v46[36]; // [rsp+90h] [rbp-168h] BYREF

  v8 = a3;
  v39 = a2;
  v42 = a5;
  v45[1] = a5;
  v45[2] = (__int64)a6;
  v43 = a7;
  v45[3] = a7;
  v36 = 0;
  v10 = 0LL;
  v41 = 0LL;
  memset(v46, 0, sizeof(v46));
  if ( (unsigned int)v8 <= 4 )
  {
    LODWORD(v46[35]) = v8;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v45[0] = *a1;
    v16 = (unsigned int *)a5;
    if ( a5 >= MmUserProbeAddress )
      v16 = (unsigned int *)MmUserProbeAddress;
    v17 = *v16;
    v36 = *v16;
    v18 = (unsigned int)v46[35];
    if ( LODWORD(v46[35]) )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + LODWORD(v46[35]) > MmUserProbeAddress || a4 + LODWORD(v46[35]) < a4 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v18 = (unsigned int)v46[35];
      }
    }
    v19 = 0LL;
    v38 = 0;
    while ( (unsigned int)v19 < v18 )
    {
      v20 = ObReferenceObjectByHandle(
              *(HANDLE *)(a4 + 8 * v19),
              0x1F0003u,
              (POBJECT_TYPE)ExEventObjectType,
              1,
              &Object,
              0LL);
      v46[v19 + 1] = Object;
      v8 = v20;
      v37 = v20;
      if ( v20 < 0 )
      {
        v24 = WdLogNewEntry5_WdWarning(v20, v21, v22, v23);
        *(_QWORD *)(v24 + 24) = *(_QWORD *)(a4 + 8 * v19);
        *(_QWORD *)(v24 + 32) = v8;
        WdLogEvent5_WdWarning(v24);
        v25 = (_DWORD *)v42;
        v26 = (_DWORD *)v43;
        goto LABEL_21;
      }
      v19 = (unsigned int)(v19 + 1);
      v38 = v19;
      v18 = (unsigned int)v46[35];
    }
    v10 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)operator new[](v17, 0x4B677844u, (POOL_TYPE)512);
    v41 = v10;
    if ( !v10 )
    {
      v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
      *(_QWORD *)(v31 + 24) = 6196LL;
      WdLogEvent5_WdWarning(v31);
      LODWORD(v8) = -1073741801;
      goto LABEL_32;
    }
    LODWORD(v8) = DxgkMiracastGetNextChunkInfo(v45, v39, (__int64)v46, &v36, v10, &v40);
    v37 = v8;
    LODWORD(v17) = v36;
    v25 = (_DWORD *)v42;
    v26 = (_DWORD *)v43;
LABEL_21:
    if ( (int)v8 >= 0 )
    {
      if ( (_DWORD)v17 )
      {
        v32 = &a6[(unsigned int)v17];
        if ( (unsigned __int64)v32 > MmUserProbeAddress || v32 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, (unsigned int)v17);
      }
      if ( (unsigned __int64)v26 >= MmUserProbeAddress )
        v26 = (_DWORD *)MmUserProbeAddress;
      *v26 = v40;
      if ( (unsigned __int64)v25 >= MmUserProbeAddress )
        v25 = (_DWORD *)MmUserProbeAddress;
      *v25 = v17;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    v15[3] = v8;
    v15[4] = 4LL;
    LODWORD(v8) = -1073741811;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
  }
LABEL_32:
  for ( i = 0LL; (unsigned int)i < LODWORD(v46[35]); i = (unsigned int)(i + 1) )
  {
    v34 = v46[i + 1];
    if ( v34 )
      ObfDereferenceObject(v34);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v8;
}
