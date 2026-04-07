/*
 * XREFs of ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180019260
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConnectToParent(CVisual *this, char a2)
{
  int v2; // ebx
  __int64 v5; // rax
  char v6; // r8
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax

  v2 = 0;
  if ( ((*((_BYTE *)this + 84) & 4) != 0) != a2 )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = (4 * a2) | *((_BYTE *)this + 84) & 0xFB;
    *((_BYTE *)this + 84) = v6;
    v7 = (v6 & 4) == 0;
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL);
    v9 = *(unsigned int *)(*((_QWORD *)this + 2) + 24LL);
    v10 = *(__int64 **)(v8 + 16);
    v11 = *(unsigned int *)(v8 + 24);
    v12 = *v10;
    if ( v7 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, CVisual *))(v12 + 424))(v10, v11, v9, this);
      v2 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1A4u);
      if ( v2 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x5B1u);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v12 + 432))(v10, v11, v9, 0LL);
      v2 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x187u);
      if ( v2 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x5ADu);
    }
  }
  return (unsigned int)v2;
}
