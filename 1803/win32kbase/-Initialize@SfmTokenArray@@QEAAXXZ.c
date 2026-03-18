/*
 * XREFs of ?Initialize@SfmTokenArray@@QEAAXXZ @ 0x1C0030780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SfmTokenArray::Initialize(SfmTokenArray *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
}
