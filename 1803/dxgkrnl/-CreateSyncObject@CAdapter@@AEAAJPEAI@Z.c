/*
 * XREFs of ?CreateSyncObject@CAdapter@@AEAAJPEAI@Z @ 0x1C004B5B4
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C004B2C0 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C01C2634 (DxgkCreateSynchronizationObjectInternal.c)
 */

__int64 __fastcall CAdapter::CreateSyncObject(CAdapter *this, unsigned int *a2)
{
  int v4; // eax
  __int64 result; // rax
  _QWORD v6[13]; // [rsp+20h] [rbp-68h] BYREF

  memset(v6, 0, 0x60uLL);
  v4 = *((_DWORD *)this + 9);
  HIDWORD(v6[1]) |= 0x83u;
  v6[2] = 0LL;
  LODWORD(v6[0]) = v4;
  LODWORD(v6[1]) = 5;
  result = DxgkCreateSynchronizationObjectInternal(v6);
  *a2 = v6[11];
  return result;
}
