/*
 * XREFs of ??1GazeProcessor@@MEAA@XZ @ 0x180037A1C
 * Callers:
 *     ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1800379D8 (--_GGazeProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GazeProcessor::~GazeProcessor(GazeProcessor *this)
{
  __int64 v2; // rcx
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD **v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &GazeProcessor::`vftable'{for `IInputProcessorDeviceUpdate'};
  *((_QWORD *)this + 1) = &GazeProcessor::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &GazeProcessor::`vftable'{for `ISupportedInputUpdateObserver'};
  *((_QWORD *)this + 3) = &GazeProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &GazeProcessor::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v13 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6)
                                                                                          + 64LL))(*((_QWORD *)this + 6));
  v4 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (**v3)(v3, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f, &v13) >= 0 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 32LL))(v13, (char *)this + 16);
  v5 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (_QWORD **)*((_QWORD *)this + 24);
  v7 = *v6;
  *v6 = v6;
  *(_QWORD *)(*((_QWORD *)this + 24) + 8LL) = *((_QWORD *)this + 24);
  *((_QWORD *)this + 25) = 0LL;
  v8 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v7 != v8 )
  {
    do
    {
      v9 = (_QWORD *)*v7;
      operator delete(v7);
      v7 = v9;
      v8 = (_QWORD *)*((_QWORD *)this + 24);
    }
    while ( v9 != v8 );
  }
  operator delete(v8);
  v10 = *((_QWORD *)this + 23);
  if ( v10 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 22);
  if ( v11 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  *((_QWORD *)this + 3) = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
}
