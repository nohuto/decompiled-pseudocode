/*
 * XREFs of ApiSetLoadSchemaEx @ 0x140764884
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x140764950 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x140764B88 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x14017DE00 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ApiSetpFindImageSection @ 0x140764B04 (ApiSetpFindImageSection.c)
 *     ApiSetpLoadSchemaImage @ 0x140764D9C (ApiSetpLoadSchemaImage.c)
 */

__int64 __fastcall ApiSetLoadSchemaEx(__int64 a1, _QWORD *a2, SIZE_T *a3)
{
  int v5; // ebx
  __int64 ImageSection; // rax
  SIZE_T v7; // rsi
  char *v8; // r14
  PVOID PoolWithTag; // rax
  PVOID v10; // rbp
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  v5 = ApiSetpLoadSchemaImage(a1, a1, &BaseAddress, &v12);
  if ( v5 >= 0 )
  {
    ImageSection = ApiSetpFindImageSection(BaseAddress);
    if ( ImageSection )
    {
      v7 = *(unsigned int *)(ImageSection + 16);
      v8 = (char *)BaseAddress + *(unsigned int *)(ImageSection + 20);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x68635341u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v8, v7);
        *a2 = v10;
        *a3 = v7;
      }
      else
      {
        v5 = -1073741801;
      }
    }
    else
    {
      v5 = -1073741701;
    }
  }
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return (unsigned int)v5;
}
