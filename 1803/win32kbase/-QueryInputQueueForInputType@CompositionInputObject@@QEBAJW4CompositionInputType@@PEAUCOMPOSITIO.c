/*
 * XREFs of ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0002DB0
 * Callers:
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00023C0 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0002648 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0002EA0 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C00034A0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueForInputType(void *a1, int a2, __int64 a3)
{
  int v5; // ebp
  CInputSink *v6; // rdi
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  CInputSink *v13; // [rsp+48h] [rbp+20h] BYREF

  v5 = CompositionInputObject::LockForRead(a1, &v13);
  if ( v5 >= 0 )
  {
    v6 = v13;
    v7 = a2 - 1;
    if ( v7 )
    {
      v10 = v7 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_5;
            v8 = *((_QWORD *)v13 + 10);
          }
          else
          {
            v8 = *((_QWORD *)v13 + 9);
          }
        }
        else
        {
          v8 = *((_QWORD *)v13 + 8);
        }
      }
      else
      {
        v8 = *((_QWORD *)v13 + 7);
      }
    }
    else
    {
      v8 = *((_QWORD *)v13 + 6);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, a3);
LABEL_5:
    CInputSink::UnlockAndRelease(v6);
  }
  return (unsigned int)v5;
}
