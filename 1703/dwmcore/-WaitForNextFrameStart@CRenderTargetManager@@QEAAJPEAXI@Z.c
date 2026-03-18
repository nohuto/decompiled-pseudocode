/*
 * XREFs of ?WaitForNextFrameStart@CRenderTargetManager@@QEAAJPEAXI@Z @ 0x180131F98
 * Callers:
 *     ?WaitForNextFrameStart@CComposition@@QEAAJPEAXI@Z @ 0x1801319C4 (-WaitForNextFrameStart@CComposition@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::WaitForNextFrameStart(CRenderTargetManager *this, void *a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r15d
  __int64 v5; // rbx
  int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  HANDLE Handles[2]; // [rsp+30h] [rbp-38h] BYREF
  void *v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  v3 = 0LL;
  v4 = *((_DWORD *)this + 12);
  v5 = 0LL;
  v9 = -2003304307;
  if ( v4 )
  {
    v10 = 0LL;
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + *((_QWORD *)this + 3)) + 208LL))(*(_QWORD *)(v10 + *((_QWORD *)this + 3)))
         || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + *((_QWORD *)this + 3)) + 176LL))(*(_QWORD *)(v10 + *((_QWORD *)this + 3))) )
    {
      v5 = (unsigned int)(v5 + 1);
      v10 += 8LL;
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_8;
    }
    v11 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v5) + 64LL;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v11 + 80LL))(v11, &v16);
    v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v5);
LABEL_8:
    if ( v16 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v3 + 64) + 88LL))(v3 + 64, a3);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v12, 0x56Au);
      if ( v9 >= 0 && v9 != 142213121 )
      {
        Handles[0] = v16;
        Handles[1] = a2;
        return WaitForMultipleObjects(2u, Handles, 0, 0x64u);
      }
    }
    else if ( v3 )
    {
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)(v3 + 64) + 96LL))(v3 + 64, a2);
    }
  }
  return (unsigned int)v9;
}
