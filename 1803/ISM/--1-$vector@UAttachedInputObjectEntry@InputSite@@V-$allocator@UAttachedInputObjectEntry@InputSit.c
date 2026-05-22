/*
 * XREFs of ??1?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA@XZ @ 0x18000EFDC
 * Callers:
 *     ??_EInputSite@@UEAAPEAXI@Z @ 0x18000EE30 (--_EInputSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<InputSite::AttachedInputObjectEntry>::~vector<InputSite::AttachedInputObjectEntry>(
        __int64 a1)
{
  char *v2; // rbx
  char *v3; // rbp
  char *v4; // rsi
  char *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v2 = *(char **)a1;
  if ( !*(_QWORD *)a1 )
    return;
  v3 = *(char **)(a1 + 8);
  if ( v2 == v3 )
    goto LABEL_11;
  v4 = v2 + 56;
  do
  {
    if ( (*((_DWORD *)v4 + 2) & 3) == 1LL )
    {
      v5 = (char *)*((_QWORD *)v4 - 1);
    }
    else
    {
      if ( (*((_DWORD *)v4 + 2) & 3) != 2LL )
        goto LABEL_9;
      v5 = v4 - 48;
    }
    (**(void (__fastcall ***)(char *))v4)(v5);
LABEL_9:
    *((_QWORD *)v4 + 1) = 0LL;
    v2 += 72;
    v4 += 72;
  }
  while ( v2 != v3 );
  v2 = *(char **)a1;
LABEL_11:
  v6 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
  v7 = v6 / 72;
  if ( (unsigned __int64)(v6 / 72) > 0x38E38E38E38E38ELL )
    goto LABEL_19;
  if ( (unsigned __int64)(72 * v7) < 0x1000 )
    goto LABEL_17;
  if ( ((unsigned __int8)v2 & 0x1F) != 0
    || (v8 = *((_QWORD *)v2 - 1), v8 >= (unsigned __int64)v2)
    || (unsigned __int64)&v2[-v8 - 8] > 0x1F )
  {
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v6, v7);
    JUMPOUT(0x18000F0E4LL);
  }
  v2 = (char *)*((_QWORD *)v2 - 1);
LABEL_17:
  operator delete(v2);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
