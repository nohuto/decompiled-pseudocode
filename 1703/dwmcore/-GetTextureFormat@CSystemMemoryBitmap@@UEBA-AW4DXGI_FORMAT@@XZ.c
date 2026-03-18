/*
 * XREFs of ?GetTextureFormat@CSystemMemoryBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x1801A8FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::GetTextureFormat(CSystemMemoryBitmap *this)
{
  unsigned __int64 v1; // rcx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v1 = ((unsigned __int64)this - 208) & -(__int64)(this != (CSystemMemoryBitmap *)224);
  (*(void (__fastcall **)(unsigned __int64, unsigned int *))(*(_QWORD *)v1 + 24LL))(v1, &v3);
  return v3;
}
