/*
 * XREFs of ?WaitForVBlank@CHolographicInteropTarget@@UEAAJPEAX@Z @ 0x1801A7300
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x1801A65B0 (-WaitForVBlank@CHolographicManager@@QEAAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::WaitForVBlank(CHolographicInteropTarget *this, void *a2)
{
  __int64 result; // rax
  CHolographicManager *v3; // rcx

  result = 0LL;
  if ( *((_BYTE *)this + 64) )
  {
    v3 = (CHolographicManager *)*((_QWORD *)this + 6);
    if ( v3 )
      return CHolographicManager::WaitForVBlank(v3);
  }
  return result;
}
