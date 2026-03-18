/*
 * XREFs of QueryAndAllocString @ 0x1C00156F0
 * Callers:
 *     GetImageName @ 0x1C00153AC (GetImageName.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

__int64 __fastcall QueryAndAllocString(
        void *Key,
        _FX_DRIVER_GLOBALS *Globals,
        _UNICODE_STRING *ValueName,
        wchar_t **StringBuffer)
{
  unsigned int v8; // edi
  _QWORD *v9; // rbp
  NTSTATUS v10; // esi
  _QWORD *v11; // rax
  ULONG Tag; // r8d
  char *PoolWithTag; // rax
  char *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int dataType; // [rsp+30h] [rbp-78h] BYREF
  __int64 KeyValueInformation; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 Size; // [rsp+40h] [rbp-68h]
  char v21; // [rsp+48h] [rbp-60h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]

  dataType = 12;
  *StringBuffer = 0LL;
  KeyValueInformation = 0LL;
  LODWORD(Size) = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, &KeyValueInformation, 0xCu, &dataType);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
    v8 = Size;
  if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -2147483643 )
    goto $cleanup;
  v11 = FxPoolAllocator(Globals, &Globals->FxPoolFrameworks, 1u, v8, Globals->Tag, retaddr);
  v9 = v11;
  if ( v11 )
  {
    memset(v11, 0, v8);
    Tag = Globals->Tag;
    dataType = v8 + 12;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v8 + 12, Tag);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = -1073741670;
      goto LABEL_29;
    }
    v10 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, PoolWithTag, dataType, &dataType);
    if ( v10 < 0 )
    {
      if ( v10 != -2147483643 )
      {
        v16 = dataType;
        goto LABEL_10;
      }
    }
    else
    {
      v15 = *((_DWORD *)v14 + 2);
      if ( v8 >= v15 )
        memmove(v9, v14 + 12, v15);
    }
    v8 = *((_DWORD *)v14 + 2);
    v16 = *((_DWORD *)v14 + 1);
LABEL_10:
    if ( v14 != &v21 )
      ExFreePoolWithTag(v14, 0);
    if ( v10 < 0 )
      goto LABEL_29;
    if ( v16 - 1 > 1 )
    {
      v10 = -1073741788;
      goto LABEL_29;
    }
    if ( !v8 || (v8 & 1) != 0 )
    {
      v10 = -1073741811;
      goto LABEL_29;
    }
    *StringBuffer = (wchar_t *)v9;
    *((_WORD *)v9 + ((unsigned __int64)v8 >> 1) - 1) = 0;
$cleanup:
    if ( v10 >= 0 )
      return (unsigned int)v10;
LABEL_29:
    if ( v9 )
      FxPoolFree(v9);
    return (unsigned int)v10;
  }
  return 3221225626LL;
}
