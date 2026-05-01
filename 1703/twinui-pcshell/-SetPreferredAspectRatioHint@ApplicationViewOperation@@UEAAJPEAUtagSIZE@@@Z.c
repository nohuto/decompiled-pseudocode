/*
 * XREFs of ?SetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z @ 0x1800E1EC0
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

  *((_BYTE *)this + 188) = 1;
  if ( a2 )
    v2 = (__int64)*a2;
  else
    v2 = 0LL;
  *((_QWORD *)this + 24) = v2;
  return 0LL;
}
