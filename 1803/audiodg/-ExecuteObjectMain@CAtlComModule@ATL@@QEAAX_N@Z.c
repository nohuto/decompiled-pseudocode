/*
 * XREFs of ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14001AF6C
 * Callers:
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14001AE24 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14001B73C (--1CAudioDGModule@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::ExecuteObjectMain(ATL::CAtlComModule *this, char a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax

  v2 = qword_140088030;
  v4 = qword_140088038;
  while ( v2 < v4 )
  {
    if ( *(_QWORD *)v2 )
    {
      LOBYTE(this) = a2;
      (*(void (__fastcall **)(ATL::CAtlComModule *))(*(_QWORD *)v2 + 64LL))(this);
      v4 = qword_140088038;
    }
    v2 += 8LL;
  }
}
