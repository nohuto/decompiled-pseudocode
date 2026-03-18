/*
 * XREFs of ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800D20A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A3C8 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATIONINPUTINFO@@PEAPEAV1@@Z @ 0x1800CB0A4 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATIONINPUTINFO@@PEAPEAV1@@Z.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800CBC6C (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18018A258 (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadCallback(struct tagMANIPULATIONINPUTINFO *a1)
{
  unsigned int v2; // esi
  int v3; // eax
  struct CManipulationFrame *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rdx
  struct CManipulationFrame *v12; // [rsp+50h] [rbp+20h] BYREF
  struct CManipulationFrame *v13; // [rsp+58h] [rbp+28h] BYREF
  struct CManipulationFrame *v14; // [rsp+60h] [rbp+30h] BYREF

  v12 = 0LL;
  if ( !a1 )
    goto LABEL_11;
  v2 = *((_DWORD *)a1 + 6);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qq(a1, &MANIPULATION_FRAME_RECEIVED, v2, *(unsigned int *)a1);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v12);
  v3 = CManipulationFrame::Create(a1, &v12);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2F6u);
    goto LABEL_8;
  }
  v4 = v12;
  v14 = v12;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v14);
  v13 = v4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v13);
  v7 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v6, v5, &v13);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v14);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2F8u);
    goto LABEL_8;
  }
  if ( !SetEvent(qword_180241250) )
  {
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(v8, &v13, 0, 0LL);
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v13);
LABEL_8:
    AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
    CurrentThreadId = GetCurrentThreadId();
    v10 = 0LL;
    for ( dword_180241A48 = CurrentThreadId; (unsigned int)v10 < *(_DWORD *)a1; v10 = (unsigned int)(v10 + 1) )
      CManipulationManager::s_rgPointerIds[v10] = *((_DWORD *)a1 + 36 * v10 + 5);
    SetManipulationInputTarget(
      *((unsigned int *)a1 + 6),
      0LL,
      0LL,
      *(unsigned int *)a1,
      CManipulationManager::s_rgPointerIds);
    dword_180241A48 = 0;
    ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
    goto LABEL_11;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qq(v8, &MANIPULATION_FRAME_QUEUED, v2, *(unsigned int *)a1);
LABEL_11:
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v12);
  return 1LL;
}
