/*
 * XREFs of DxgkNetDispGetNextChunkInfo @ 0x1C01800C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C0030B50 (DxgkMiracastGetNextChunkInfo.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
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
  _QWORD *v14; // rax
  unsigned int *v15; // rax
  SIZE_T v16; // r14
  unsigned int v17; // ecx
  __int64 v18; // rsi
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  _DWORD *v23; // r13
  _DWORD *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  char *v29; // rdx
  __int64 i; // rsi
  PVOID v31; // rcx
  unsigned int v33; // [rsp+30h] [rbp-1C8h] BYREF
  NTSTATUS v34; // [rsp+34h] [rbp-1C4h]
  int v35; // [rsp+3Ch] [rbp-1BCh]
  unsigned int v36; // [rsp+40h] [rbp-1B8h]
  unsigned int v37; // [rsp+44h] [rbp-1B4h] BYREF
  struct D3DKMT_MIRACAST_CHUNK_DATA *v38; // [rsp+48h] [rbp-1B0h]
  ULONG64 v39; // [rsp+50h] [rbp-1A8h]
  __int64 v40; // [rsp+58h] [rbp-1A0h]
  PVOID Object; // [rsp+60h] [rbp-198h] BYREF
  __int64 v42[5]; // [rsp+68h] [rbp-190h] BYREF
  PVOID v43[36]; // [rsp+90h] [rbp-168h] BYREF

  v8 = a3;
  v36 = a2;
  v39 = a5;
  v42[1] = a5;
  v42[2] = (__int64)a6;
  v40 = a7;
  v42[3] = a7;
  v33 = 0;
  v10 = 0LL;
  v38 = 0LL;
  memset(v43, 0, sizeof(v43));
  if ( (unsigned int)v8 <= 4 )
  {
    LODWORD(v43[35]) = v8;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v42[0] = *a1;
    v15 = (unsigned int *)a5;
    if ( a5 >= MmUserProbeAddress )
      v15 = (unsigned int *)MmUserProbeAddress;
    v16 = *v15;
    v33 = *v15;
    v17 = (unsigned int)v43[35];
    if ( LODWORD(v43[35]) )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + LODWORD(v43[35]) > MmUserProbeAddress || a4 + LODWORD(v43[35]) < a4 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v17 = (unsigned int)v43[35];
      }
    }
    v18 = 0LL;
    v35 = 0;
    while ( (unsigned int)v18 < v17 )
    {
      v19 = ObReferenceObjectByHandle(
              *(HANDLE *)(a4 + 8 * v18),
              0x1F0003u,
              (POBJECT_TYPE)ExEventObjectType,
              1,
              &Object,
              0LL);
      v43[v18 + 1] = Object;
      v8 = v19;
      v34 = v19;
      if ( v19 < 0 )
      {
        v22 = WdLogNewEntry5_WdWarning(v19, v20, v21);
        *(_QWORD *)(v22 + 24) = *(_QWORD *)(a4 + 8 * v18);
        *(_QWORD *)(v22 + 32) = v8;
        WdLogEvent5_WdWarning(v22);
        v23 = (_DWORD *)v39;
        v24 = (_DWORD *)v40;
        goto LABEL_21;
      }
      v18 = (unsigned int)(v18 + 1);
      v35 = v18;
      v17 = (unsigned int)v43[35];
    }
    v10 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
    v38 = v10;
    if ( !v10 )
    {
      v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = 6504LL;
      WdLogEvent5_WdWarning(v28);
      LODWORD(v8) = -1073741801;
      goto LABEL_32;
    }
    LODWORD(v8) = DxgkMiracastGetNextChunkInfo(v42, v36, (__int64)v43, &v33, v10, &v37);
    v34 = v8;
    LODWORD(v16) = v33;
    v23 = (_DWORD *)v39;
    v24 = (_DWORD *)v40;
LABEL_21:
    if ( (int)v8 >= 0 )
    {
      if ( (_DWORD)v16 )
      {
        v29 = &a6[(unsigned int)v16];
        if ( (unsigned __int64)v29 > MmUserProbeAddress || v29 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, (unsigned int)v16);
      }
      if ( (unsigned __int64)v24 >= MmUserProbeAddress )
        v24 = (_DWORD *)MmUserProbeAddress;
      *v24 = v37;
      if ( (unsigned __int64)v23 >= MmUserProbeAddress )
        v23 = (_DWORD *)MmUserProbeAddress;
      *v23 = v16;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v14[3] = v8;
    v14[4] = 4LL;
    LODWORD(v8) = -1073741811;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
  }
LABEL_32:
  for ( i = 0LL; (unsigned int)i < LODWORD(v43[35]); i = (unsigned int)(i + 1) )
  {
    v31 = v43[i + 1];
    if ( v31 )
      ObfDereferenceObject(v31);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v8;
}
