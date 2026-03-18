/*
 * XREFs of DxgkGetProcessInterferenceCount @ 0x1C01A1C00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  ProcessDxgProcess = PsGetProcessDxgProcess(a1);
  *a2 = 0;
  v5 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 112), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    if ( *(_DWORD *)(v5 + 40) == 1 )
    {
      v7 = 0;
      v8 = 15LL;
      do
      {
        DXGGLOBAL::GetGlobal(v6);
        if ( DXGGLOBAL::m_pDxgmmsExport[v8 - 15] )
        {
          v13 = 0;
          Global = DXGGLOBAL::GetGlobal(v6);
          v6 = *(_QWORD *)(v5 + 72);
          v10 = *(_QWORD *)((char *)Global + v8 * 8);
          if ( v6 )
            v6 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1) + 16);
          if ( v6 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v10 + 8) + 904LL))(v6, &v13);
          *a2 += v13;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < 2 );
    }
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
