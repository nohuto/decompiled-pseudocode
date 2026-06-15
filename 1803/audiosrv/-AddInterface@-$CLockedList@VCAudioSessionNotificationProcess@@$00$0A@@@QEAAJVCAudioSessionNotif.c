/*
 * XREFs of ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800B1840
 * Callers:
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800B1790 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x180097F84 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800B13AC (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x1800B153C (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 *     ?Add@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCAudioSessionNotificationProcess@@@Z @ 0x1800B16F0 (-Add@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotification.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800B3360 (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::AddInterface(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  __int64 i; // r14
  bool v5; // zf
  _QWORD *v6; // rax
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-58h]
  ATL::CAtlException *v11; // [rsp+30h] [rbp-48h] BYREF
  ATL::CAtlException *v12; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+98h] [rbp+20h]

  v2 = a1;
  v3 = 0;
  EnterCriticalSection(a1);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = (unsigned int)i == *(_QWORD *)&v2[1].LockCount;
    if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&v2[1].LockCount )
      break;
    v6 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                     &v2[1].DebugInfo,
                     (unsigned int)i);
    if ( operator==(v6, a2) )
    {
      v5 = (unsigned int)i == *(_QWORD *)&v2[1].LockCount;
      break;
    }
  }
  if ( v5 )
  {
    try
    {
      v10 = v2 + 1;
      v15 = ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::Add(
              &v2[1].DebugInfo,
              a2);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v8 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v3 = *(_DWORD *)v8;
      if ( *(int *)v8 < 0 )
      {
        v2 = a1;
        goto LABEL_17;
      }
      v2 = a1;
    }
    v3 = 0;
    try
    {
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v2[1].SpinCount);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v9 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v3 = *(_DWORD *)v9;
      if ( *(int *)v9 < 0 )
        ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
          v10,
          v15);
      v2 = a1;
    }
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v2[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v2[1].SpinCount + 4 * i);
  }
LABEL_17:
  LeaveCriticalSection(v2);
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess((CAudioSessionNotificationProcess *)a2);
  return v3;
}
