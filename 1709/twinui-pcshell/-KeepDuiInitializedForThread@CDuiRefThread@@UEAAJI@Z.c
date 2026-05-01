/*
 * XREFs of ?KeepDuiInitializedForThread@CDuiRefThread@@UEAAJI@Z @ 0x1800DE600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuiRefThread::KeepDuiInitializedForThread(CDuiRefThread *this, unsigned int a2, __int64 a3)
{
  int inited; // ebx
  bool v6; // zf
  char v8; // [rsp+20h] [rbp-18h]

  inited = 0;
  if ( !*((_BYTE *)this + 8) )
  {
    v8 = 0;
    LOBYTE(a3) = 1;
    inited = InitProcessPriv(14LL, &_ImageBase, a3, 0LL, v8);
    if ( inited >= 0 )
    {
      inited = InitThread(a2);
      if ( inited < 0 )
      {
        UnInitProcessPriv(&_ImageBase);
      }
      else
      {
        v6 = *((_BYTE *)this + 9) == 0;
        *((_BYTE *)this + 8) = 1;
        if ( !v6 )
          SkipDLLUnloadInitChecks();
      }
    }
  }
  return (unsigned int)inited;
}
