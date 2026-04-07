/*
 * XREFs of ?GetPixelFormat@CCompoundBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800A1790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompoundBitmapLock::GetPixelFormat(CCompoundBitmapLock *this, struct _GUID *a2)
{
  return (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 48LL))(
           *((_QWORD *)this + 1) + 80LL,
           a2);
}
