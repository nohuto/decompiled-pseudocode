/*
 * XREFs of ??1DXGHWQUEUE@@IEAA@XZ @ 0x1C01AC8AC
 * Callers:
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C0028680 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0002C08 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0007E1C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGHWQUEUE::~DXGHWQUEUE(DXGHWQUEUE *this)
{
  __int64 v2; // rax
  DXGDEVICESYNCOBJECT *v3; // rcx
  unsigned int v4; // edx

  if ( !*((_BYTE *)this + 56) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 32LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
  if ( v3 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v3);
  v4 = *((_DWORD *)this + 6);
  if ( v4 )
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL), v4);
  *((_QWORD *)this + 2) = 0LL;
}
