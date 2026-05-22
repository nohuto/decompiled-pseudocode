/*
 * XREFs of ?OnHitTest@InputRedirectionComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A7180
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForBitFlags@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJKPEAPEAVInputRedirectionTarget@@@Z @ 0x1800A7804 (-GetValueForBitFlags@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJKPEAPEAVInputRe.c)
 *     ?RemoveValue@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJAEBQEAVInputRedirectionTarget@@@Z @ 0x1800A795C (-RemoveValue@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJAEBQEAVInputRedirection.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionComponent::OnHitTest(
        InputRedirectionComponent *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        __int64 a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  __int64 v8; // rbx
  int v9; // esi
  int v10; // r15d
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r12d
  __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  char *v17; // r14
  _DWORD *v18; // rax
  unsigned int v19; // ecx
  _DWORD *v20; // rax
  __int64 v21; // rdi
  struct InputTargetingDecision *v22; // rdi
  __int64 v23; // rcx
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF
  __int64 v26; // [rsp+90h] [rbp+40h] BYREF

  v8 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 9) + 24LL))(
          *((_QWORD *)this + 9),
          *((unsigned int *)a3 + 1),
          &v25);
  v13 = v11;
  if ( v11 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 217, v11);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v14 = *(unsigned int *)a3;
  v15 = 0;
  v16 = *(_DWORD *)(v25 + 4);
  v17 = (char *)this + 80;
  v18 = v17;
  while ( (v16 & *v18) == 0 )
  {
    ++v15;
    v18 += 4;
    if ( v15 >= 4 )
      goto LABEL_12;
  }
  v14 = v16;
LABEL_12:
  v19 = 0;
  v20 = v17;
  while ( ((unsigned int)v14 & *v20) == 0 )
  {
    ++v19;
    v20 += 4;
    if ( v19 >= 4 )
      goto LABEL_22;
  }
  FixedSizeBitFlagMap<InputRedirectionTarget *,4>::GetValueForBitFlags(v17, v14, &v26);
  v21 = v26;
  if ( *(_QWORD *)(v26 + 40) )
  {
    if ( *(_DWORD *)(v26 + 64) != *(_DWORD *)(v25 + 8) )
    {
      v9 = 1;
      if ( *(_BYTE *)(v26 + 52) )
        v9 = 2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      v8 = v21;
      v10 = 1;
    }
  }
  else
  {
    FixedSizeBitFlagMap<InputRedirectionTarget *,4>::RemoveValue(v17, &v26);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_22:
  v22 = a6;
  *(_DWORD *)a6 = v9;
  if ( *((_QWORD *)v22 + 1) != v8 )
  {
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v23 = *((_QWORD *)v22 + 1);
    *((_QWORD *)v22 + 1) = v8;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  *((_DWORD *)v22 + 4) = v10;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v13;
}
