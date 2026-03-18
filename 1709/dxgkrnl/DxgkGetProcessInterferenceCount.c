/*
 * XREFs of DxgkGetProcessInterferenceCount @ 0x1C01AC4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000E3B0 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v13);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  ProcessDxgProcess = PsGetProcessDxgProcess(a1, v4);
  *a2 = 0;
  v6 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 104));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    if ( *(_DWORD *)(v6 + 32) == 1 )
    {
      v8 = 0;
      v9 = 15LL;
      do
      {
        DXGGLOBAL::GetGlobal(v7);
        if ( DXGGLOBAL::m_pDxgmmsExport[v9 - 15] )
        {
          v14 = 0;
          Global = DXGGLOBAL::GetGlobal(v7);
          v7 = *(_QWORD *)(v6 + 64);
          v11 = *(_QWORD *)((char *)Global + v9 * 8);
          if ( v7 )
            v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)(*(_DWORD *)v11 - 1) + 16);
          if ( v7 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v11 + 8) + 792LL))(v7, &v14);
          *a2 += v14;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < 2 );
    }
    if ( v12[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
