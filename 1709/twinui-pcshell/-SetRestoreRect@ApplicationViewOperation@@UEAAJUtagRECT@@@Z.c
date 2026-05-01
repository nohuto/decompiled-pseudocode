/*
 * XREFs of ?SetRestoreRect@ApplicationViewOperation@@UEAAJUtagRECT@@@Z @ 0x180107280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetRestoreRect(ApplicationViewOperation *this, struct tagRECT *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = (__int128)*a2;
  *((_BYTE *)this + 76) = 1;
  result = 0LL;
  *((_OWORD *)this + 5) = v2;
  return result;
}
