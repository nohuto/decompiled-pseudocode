/*
 * XREFs of ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x1C00656AC
 * Callers:
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C007C100 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

__int64 __fastcall FxIrpQueue::PeekRequest(
        FxIrpQueue *this,
        _IO_CSQ_IRP_CONTEXT *TagContext,
        _FILE_OBJECT *FileObject,
        FxRequest **ppOutRequest)
{
  FxIrpQueue *Flink; // r10
  bool v6; // r11
  _IO_CSQ_IRP_CONTEXT *m_LockObject; // rbx
  int v8; // r8d
  FxRequest *v9; // rbx
  __int64 result; // rax

  Flink = (FxIrpQueue *)this->m_Queue.Flink;
  v6 = TagContext == 0LL;
  while ( Flink != this )
  {
    if ( !BYTE4(Flink[-3].m_LockObject) )
    {
      m_LockObject = (_IO_CSQ_IRP_CONTEXT *)Flink[-1].m_LockObject;
      if ( v6 )
      {
        if ( !FileObject )
        {
          v8 = 447;
          goto LABEL_7;
        }
        if ( *(_FILE_OBJECT **)&Flink->m_LockObject->m_SpinLock.m_DbgFlagIsInitialized == FileObject )
        {
          v8 = 432;
LABEL_7:
          v9 = (FxRequest *)&m_LockObject[-5];
          FxObject::AddRef(v9, 0LL, v8, "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp");
          result = 0LL;
          *ppOutRequest = v9;
          return result;
        }
      }
      else
      {
        v6 = m_LockObject == TagContext;
      }
    }
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
  }
  if ( !TagContext )
    return 2147483674LL;
  result = 3221226021LL;
  if ( v6 )
    return 2147483674LL;
  return result;
}
