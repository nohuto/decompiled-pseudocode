/*
 * XREFs of ACPIBusIrpQueryInstanceId @ 0x1C00779AC
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0071520 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C00153E0 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C001595C (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIAllocateBuffer @ 0x1C0071F04 (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryInstanceId(_QWORD *a1, SIZE_T *a2, _QWORD *a3)
{
  PVOID v6; // rax
  size_t v7; // r8
  size_t v8; // rdi
  void *v9; // r14
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  wchar_t *PoolWithTag; // rax
  __int64 v15; // rdx
  const char *v16; // rax
  const char *v17; // rcx
  int v19; // [rsp+20h] [rbp-40h]
  int v20; // [rsp+28h] [rbp-38h]
  int v21; // [rsp+30h] [rbp-30h]
  size_t Size; // [rsp+80h] [rbp+20h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+88h] [rbp+28h] BYREF

  pszDest = 0LL;
  Size = 0LL;
  v6 = ACPIAllocateBuffer(a2, (__int64)a3, 0x294uLL);
  v8 = *a2;
  v9 = v6;
  *a1 = v6;
  if ( !v6 )
    goto LABEL_2;
  v11 = ACPIGet((__int64)a3, 0x4449555Fu, 268959894, 0LL, 0, 0LL, 0LL, (__int64)&pszDest, (__int64)&Size);
  v10 = v11;
  if ( v11 != -1073741661 )
  {
    if ( v11 < 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v12 = a3[71];
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v12 + v13) );
    Size = 2 * v13 + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Size, 0x53706341u);
    pszDest = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_2;
    memset(PoolWithTag, 0, Size);
    RtlStringCbPrintfW(pszDest, Size, L"%S", a3[71]);
    v10 = 0;
LABEL_10:
    v7 = Size;
    if ( v8 >= Size )
    {
      memmove(v9, pszDest, Size);
      if ( v10 >= 0 )
        goto LABEL_18;
LABEL_12:
      if ( v10 == -1073741772 )
        goto LABEL_18;
      goto LABEL_13;
    }
LABEL_2:
    v10 = -1073741670;
  }
LABEL_13:
  v15 = 0LL;
  v16 = byte_1C005B1F0;
  v17 = byte_1C005B1F0;
  if ( a3 )
  {
    v7 = a3[1];
    v15 = (__int64)a3;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v16 = (const char *)a3[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v17 = (const char *)a3[71];
    }
  }
  WPP_RECORDER_SF_qdLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v15,
    v7,
    0x26u,
    v19,
    v20,
    v21,
    v10,
    v15,
    v16,
    v17);
LABEL_18:
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0x53706341u);
  return (unsigned int)v10;
}
