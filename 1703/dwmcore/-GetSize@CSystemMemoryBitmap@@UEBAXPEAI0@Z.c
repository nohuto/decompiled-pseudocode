/*
 * XREFs of ?GetSize@CSystemMemoryBitmap@@UEBAXPEAI0@Z @ 0x1801A8FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSystemMemoryBitmap::GetSize(CSystemMemoryBitmap *this, unsigned int *a2, unsigned int *a3)
{
  unsigned __int64 v3; // rcx

  v3 = ((unsigned __int64)this - 208) & -(__int64)(this != (CSystemMemoryBitmap *)224);
  (*(void (__fastcall **)(unsigned __int64, unsigned int *, unsigned int *))(*(_QWORD *)v3 + 48LL))(v3, a2, a3);
}
