/*
 * XREFs of ?SetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z @ 0x180106D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetPreferredAspectRatioHint(
        ApplicationViewOperation *this,
        struct tagSIZE *a2)
{
  __int64 v2; // rax

  *((_BYTE *)this + 204) = 1;
  if ( a2 )
    v2 = (__int64)*a2;
  else
    v2 = 0LL;
  *((_QWORD *)this + 26) = v2;
  return 0LL;
}
