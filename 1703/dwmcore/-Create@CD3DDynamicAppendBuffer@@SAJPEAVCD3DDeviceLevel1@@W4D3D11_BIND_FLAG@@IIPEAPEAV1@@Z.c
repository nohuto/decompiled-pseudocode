/*
 * XREFs of ?Create@CD3DDynamicAppendBuffer@@SAJPEAVCD3DDeviceLevel1@@W4D3D11_BIND_FLAG@@IIPEAPEAV1@@Z @ 0x1800C5564
 * Callers:
 *     ?GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallbackRenderer@@@Z @ 0x1800ABE38 (-GetNextHWCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCHWCallba.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x1800C5634 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::Create(
        struct CD3DDeviceLevel1 *a1,
        enum D3D11_BIND_FLAG a2,
        unsigned int a3,
        __int64 a4,
        struct CD3DDynamicAppendBuffer **a5)
{
  CD3DDynamicAppendBuffer *v8; // rax
  CD3DDynamicAppendBuffer *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi

  v8 = (CD3DDynamicAppendBuffer *)HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 2) = a1;
    *(_QWORD *)v8 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v8 = &CD3DDynamicAppendBuffer::`vftable';
    *((_DWORD *)v8 + 2) = 0;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 5) = 0LL;
    *((_DWORD *)v8 + 12) = 0;
    *((_DWORD *)v8 + 13) = 0;
    *((_DWORD *)v8 + 14) = 0;
    *((_DWORD *)v8 + 15) = -1;
    *((_DWORD *)v8 + 8) = a2;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    (**(void (__fastcall ***)(CD3DDynamicAppendBuffer *))v9)(v9);
    v10 = CD3DDynamicAppendBuffer::EnsureByteSpace(v9, a3, 1);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1Fu);
      (*(void (__fastcall **)(CD3DDynamicAppendBuffer *))(*(_QWORD *)v9 + 8LL))(v9);
    }
    else
    {
      *a5 = v9;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
  }
  return v11;
}
