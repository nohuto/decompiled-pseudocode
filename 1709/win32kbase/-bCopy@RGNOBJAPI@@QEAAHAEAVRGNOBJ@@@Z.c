/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0043420
 * Callers:
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x1C0059E40 (GreCopyVisRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0043500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0046700 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  __int64 v2; // rax
  __int64 v4; // r10
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int16 *v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)this;
  v6 = 216;
  v7 = *(unsigned int *)(v2 + 80);
  v8 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( (v8 >= (unsigned int)v7 || *(_DWORD *)(v2 + 24) <= 0xD8u) && (v8 <= 0xD8 || *(_DWORD *)(v2 + 24) > 0xD8u) )
  {
    memmove((void *)(v4 + 80), (const void *)(v2 + 80), v7 - 80);
    result = 1LL;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                        - *(_DWORD *)a2
                                        - 104
                                        + *(_QWORD *)this
                                        + 104LL;
  }
  else
  {
    if ( (unsigned int)v7 > 0xD8 )
      v6 = *(_DWORD *)(v2 + 80);
    v10 = 0;
    v14 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v13, v6);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v13);
    if ( v13 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v13, a2);
      v10 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v13);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v13, v11, v12);
    return v10;
  }
  return result;
}
