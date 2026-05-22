/*
 * XREFs of ??_EBufferedInputTarget@@MEAAPEAXI@Z @ 0x1800A4B10
 * Callers:
 *     ??_EBufferedInputTarget@@O7EAAPEAXI@Z @ 0x1800A5510 (--_EBufferedInputTarget@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAA@XZ @ 0x180067378 (--1-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB420 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
BufferedInputTarget *__fastcall BufferedInputTarget::`vector deleting destructor'(BufferedInputTarget *this, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &BufferedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &BufferedInputTarget::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = 0;
  v6 = (_QWORD *)((char *)this + 40);
  do
  {
    *((_DWORD *)v6 - 2) = 0;
    v7 = *v6;
    if ( *v6 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    ++v5;
    v6 += 3;
  }
  while ( v5 < 6 );
  std::vector<InputInfo>::~vector<InputInfo>((unsigned __int64 *)this + 23);
  `eh vector destructor iterator'(
    (char *)this + 32,
    0x18uLL,
    6uLL,
    (void (*)(void *))std::pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>::~pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>);
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
