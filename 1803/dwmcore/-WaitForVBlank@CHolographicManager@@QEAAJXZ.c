/*
 * XREFs of ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x1801F946C
 * Callers:
 *     ?WaitForVBlank@CHolographicInteropTarget@@UEAAJPEAX@Z @ 0x1801FE720 (-WaitForVBlank@CHolographicInteropTarget@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
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
    && !*(_BYTE *)(v4 + 176)
    && v3
    && CHolographicInteropTaskQueue::PostMessageW(v3, 0x12u, 0LL, *((void **)this + 27), 0LL, 0LL, 0LL) )
  {
    WaitForSingleObject(*((HANDLE *)this + 27), 0x64u);
  }
  else
  {
    return 142213121;
  }
  return v2;
}
