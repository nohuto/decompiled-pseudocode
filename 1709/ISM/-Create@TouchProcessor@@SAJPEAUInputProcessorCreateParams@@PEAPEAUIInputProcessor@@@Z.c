/*
 * XREFs of ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180072ED0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x18006F61C (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     ??0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180070B0C (--0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@PointerProcessor@@IEAAJXZ @ 0x180070D68 (-Initialize@PointerProcessor@@IEAAJXZ.c)
 *     ?InitializeCoreMessaging@TouchProcessor@@QEAAJXZ @ 0x180073594 (-InitializeCoreMessaging@TouchProcessor@@QEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  char *v4; // rax
  _DWORD *v5; // rcx
  char *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // esi
  int v12; // r9d
  PointerInfoAdapter *v13; // rax
  __int64 v14; // rcx
  PointerInfoAdapter *v15; // rdi
  PointerInfoAdapter *v16; // rdi

  v4 = (char *)malloc(0x420uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0x420uLL);
  if ( v6 )
  {
    PointerProcessor::PointerProcessor((PointerProcessor *)v6, *a1, a1[1]);
    *(_QWORD *)v6 = &TouchProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v6 + 1) = &TouchProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v6 + 21) = &TouchProcessor::`vftable';
    *((_QWORD *)v6 + 122) = 0LL;
    *((_QWORD *)v6 + 123) = 0LL;
    *((_QWORD *)v6 + 124) = 0LL;
    *((_QWORD *)v6 + 125) = 0LL;
    *(_WORD *)(v6 + 1009) = 0;
    v6[1011] = 0;
    v7 = 0;
    *(_QWORD *)(v6 + 1012) = 0LL;
    *((_WORD *)v6 + 510) = 0;
    *(_QWORD *)(v6 + 1022) = 0LL;
    v6[1030] = 0;
    *((_DWORD *)v6 + 262) = 0;
    v6[1008] = 0;
    v5 = v6 + 176;
    do
    {
      *v5 = 0;
      ++v7;
      v5 += 4;
    }
    while ( v7 < 0x32 );
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v8 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, 57, 14);
    return v8;
  }
  v9 = PointerProcessor::Initialize((PointerProcessor *)v6);
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_34;
    v12 = 73;
    goto LABEL_15;
  }
  *((_QWORD *)v6 + 129) = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)v6 + 5) + 32LL))(
         *((_QWORD *)v6 + 5),
         v6 + 1040,
         v6 + 1044);
  v11 = v9;
  if ( v9 >= 0 )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      v13 = (PointerInfoAdapter *)malloc(0x60uLL);
      v15 = v13;
      if ( v13 )
        memset(v13, 0, 0x60uLL);
      if ( v15 )
        v16 = PointerInfoAdapter::PointerInfoAdapter(v15, (struct IPointerInfoAdapterClient *)(v6 + 168));
      else
        v16 = 0LL;
      if ( *((PointerInfoAdapter **)v6 + 125) != v16 )
      {
        if ( v16 )
          (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v16 + 8LL))(v16);
        v14 = *((_QWORD *)v6 + 125);
        *((_QWORD *)v6 + 125) = v16;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( !*((_QWORD *)v6 + 125) )
      {
        v8 = -2147024882;
        LOBYTE(v11) = 14;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v8;
        McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 81, 14);
        goto LABEL_35;
      }
    }
    TouchProcessor::InitializeCoreMessaging((TouchProcessor *)v6);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v12 = 76;
LABEL_15:
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, v12, v9);
  }
LABEL_34:
  v8 = v11;
  if ( v11 >= 0 )
  {
    *a2 = (struct IInputProcessor *)v6;
    return v8;
  }
LABEL_35:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 60, v11);
  return v8;
}
