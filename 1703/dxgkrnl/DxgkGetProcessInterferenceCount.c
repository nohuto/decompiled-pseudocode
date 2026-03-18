/*
 * XREFs of DxgkGetProcessInterferenceCount @ 0x1C0197480
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0012D78 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdi
  struct DXGGLOBAL *Global; // rax
  _BYTE v14[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  ProcessDxgProcess = PsGetProcessDxgProcess(a1, v4);
  *a2 = 0;
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 80), v7, v8);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    if ( *(_DWORD *)(v9 + 32) == 1 )
    {
      v11 = 0;
      v12 = 15LL;
      do
      {
        DXGGLOBAL::GetGlobal(v10, v6, v7, v8);
        if ( DXGGLOBAL::m_pDxgmmsExport[v12 - 15] )
        {
          v16 = 0;
          Global = DXGGLOBAL::GetGlobal(v10, v6, v7, v8);
          v10 = *(_QWORD *)(v9 + 64);
          v6 = *(_QWORD *)((char *)Global + v12 * 8);
          if ( v10 )
            v10 = *(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)v6 - 1) + 16);
          if ( v10 )
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v6 + 8) + 792LL))(v10, &v16);
          *a2 += v16;
        }
        ++v11;
        ++v12;
      }
      while ( v11 < 2 );
    }
    if ( v14[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v6, v7, v8);
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v6, v7, v8);
}
