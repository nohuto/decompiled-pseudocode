/*
 * XREFs of ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180037C10
 * Callers:
 *     <none>
 * Callees:
 *     ??0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180037928 (--0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x1800903A4 (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  GazeProcessor *v4; // rax
  GazeProcessor *v5; // rbx
  GazeProcessor *v6; // rdi
  int v7; // ebx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, GazeProcessor **); // rbx
  GazeProcessor *v13; // rcx
  GazeProcessor *v14; // rcx
  GazeProcessor *v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = (GazeProcessor *)malloc(0xD0uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0xD0uLL);
  v16 = v5;
  if ( v5 )
    v6 = GazeProcessor::GazeProcessor(v5, *a1, a1[1]);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v16 = 0LL;
    v8 = (_QWORD *)((char *)v6 + 184);
    v9 = *((_QWORD *)v6 + 23);
    if ( v9 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v7 = InputConfigContextProvider::Create((struct ISystemContextProvider **)v6 + 23);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 24LL))(*v8, (__int64)v6 + 8);
      if ( v7 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 6) + 64LL))(*((_QWORD *)v6 + 6));
        v11 = *((_QWORD *)v6 + 8);
        if ( v11 )
        {
          *((_QWORD *)v6 + 8) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 80LL))(
               v10,
               *((_QWORD *)v6 + 7),
               (__int64)v6 + 64);
        if ( v7 >= 0 )
        {
          v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, GazeProcessor **))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 6) + 64LL))(*((_QWORD *)v6 + 6));
          v13 = v16;
          if ( v16 )
          {
            v16 = 0LL;
            (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)v13 + 16LL))(v13);
          }
          v7 = (**v12)(v12, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f, &v16);
          if ( v7 >= 0 )
            v7 = (*(__int64 (__fastcall **)(GazeProcessor *, __int64))(*(_QWORD *)v16 + 24LL))(v16, (__int64)v6 + 16);
        }
      }
    }
    v14 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v7 >= 0 )
      *a2 = (GazeProcessor *)((char *)v6 + 24);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
