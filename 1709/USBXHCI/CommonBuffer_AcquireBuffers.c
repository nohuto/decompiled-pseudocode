/*
 * XREFs of CommonBuffer_AcquireBuffers @ 0x1C000F748
 * Callers:
 *     XilCommonBuffer_AcquireBuffers @ 0x1C000FE4C (XilCommonBuffer_AcquireBuffers.c)
 *     TR_EnsureSegments @ 0x1C0022ED4 (TR_EnsureSegments.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C0040E4C (XilCoreDeviceSlot_AllocateResources.c)
 * Callees:
 *     CommonBuffer_QueueWorkItem @ 0x1C000F908 (CommonBuffer_QueueWorkItem.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C0040408 (XilCoreCommonBuffer_AcquireBuffers.c)
 */

__int64 __fastcall CommonBuffer_AcquireBuffers(
        KSPIN_LOCK *Context,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v8; // eax
  unsigned int v9; // edi
  _QWORD *v10; // rbx
  KIRQL v11; // al
  PVOID *v12; // rdx
  KSPIN_LOCK *v13; // r14
  char v14; // bp
  KIRQL v15; // al
  _QWORD **v16; // rsi
  KIRQL v17; // dl
  _QWORD *i; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  char v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0;
  v8 = XilCoreCommonBuffer_AcquireBuffers((int)Context + 80, a2, a3, a4, a5, a6, (__int64)&v22);
  v9 = v8;
  if ( v22 )
  {
    v10 = a7;
    if ( v8 < 0 && a7 )
    {
      v9 = 259;
      v11 = KeAcquireSpinLockRaiseToDpc(Context + 6);
      v12 = (PVOID *)Context[8];
      if ( *v12 != Context + 7 )
        __fastfail(3u);
      *v10 = Context + 7;
      v10[1] = v12;
      *v12 = v10;
      Context[8] = (KSPIN_LOCK)v10;
      KeReleaseSpinLock(Context + 6, v11);
    }
    if ( !(unsigned __int8)CommonBuffer_QueueWorkItem(Context) && v10 )
    {
      v13 = Context + 6;
      v14 = 0;
      v15 = KeAcquireSpinLockRaiseToDpc(Context + 6);
      v16 = (_QWORD **)(Context + 7);
      v17 = v15;
      for ( i = *v16; v16 != i; i = (_QWORD *)*i )
      {
        if ( i == v10 )
        {
          v20 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v21 = (_QWORD *)v10[1], (_QWORD *)*v21 != v10) )
            __fastfail(3u);
          *v21 = v20;
          v14 = 1;
          *(_QWORD *)(v20 + 8) = v21;
          break;
        }
      }
      KeReleaseSpinLock(v13, v17);
      if ( v14 )
        return (unsigned int)-1073741670;
    }
  }
  return v9;
}
