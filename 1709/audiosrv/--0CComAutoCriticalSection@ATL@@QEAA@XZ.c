/*
 * XREFs of ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180060C00
 * Callers:
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x180060C4C (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x1800C7818 (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x1800E64EC (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x1800E8288 (--0EndpointCollection@@IEAA@XZ.c)
 *     ??0PhoneTopology3@@IEAA@XZ @ 0x1800EA5AC (--0PhoneTopology3@@IEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002B200 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct _RTL_CRITICAL_SECTION *__fastcall ATL::CComAutoCriticalSection::CComAutoCriticalSection(
        struct _RTL_CRITICAL_SECTION *this)
{
  int v2; // eax

  memset(this, 0, sizeof(struct _RTL_CRITICAL_SECTION));
  v2 = ATL::CComCriticalSection::Init(this);
  if ( v2 < 0 )
    ATL::AtlThrowImpl(v2);
  return this;
}
