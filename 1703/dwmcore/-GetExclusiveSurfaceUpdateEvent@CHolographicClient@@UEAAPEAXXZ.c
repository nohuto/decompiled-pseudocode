/*
 * XREFs of ?GetExclusiveSurfaceUpdateEvent@CHolographicClient@@UEAAPEAXXZ @ 0x1801A7C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CHolographicClient::GetExclusiveSurfaceUpdateEvent(CHolographicClient *this)
{
  if ( *((_QWORD *)this + 17) )
    return (void *)*((_QWORD *)this + 24);
  else
    return 0LL;
}
