/*
 * XREFs of ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x1801A65B0
 * Callers:
 *     ?WaitForVBlank@CHolographicInteropTarget@@UEAAJPEAX@Z @ 0x1801A7300 (-WaitForVBlank@CHolographicInteropTarget@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicManager::WaitForVBlank(CHolographicManager *this)
{
  unsigned int v2; // ebx
  CHolographicInteropTaskQueue *v3; // rcx
  __int64 v4; // rax

  v2 = 0;
  v3 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
  v4 = *((_QWORD *)this + 4);
  if ( v4
    && !*(_BYTE *)(v4 + 144)
    && v3
    && CHolographicInteropTaskQueue::PostMessageW(v3, 0x11u, 0LL, *((void **)this + 22), 0LL, 0LL, 0LL) )
  {
    WaitForSingleObject(*((HANDLE *)this + 22), 0x64u);
  }
  else
  {
    return 142213121;
  }
  return v2;
}
