/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x1404FA068
 * Callers:
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     ExGetCallBackBlockContext @ 0x14008BB84 (ExGetCallBackBlockContext.c)
 *     ExDereferenceCallBackBlock @ 0x14008BC30 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x14008BD80 (ExGetCallBackBlockRoutine.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseExtensionTable @ 0x140117418 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PsReferenceProcessFilePointer @ 0x1404A1CC0 (PsReferenceProcessFilePointer.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(struct _EX_RUNDOWN_REF *a1, __int64 a2, char a3)
{
  unsigned __int64 ExtensionTable; // rax
  unsigned int v7; // r13d
  unsigned __int64 Count; // rcx
  bool v9; // r15
  int v10; // eax
  __int128 v11; // xmm0
  char *v12; // rcx
  char *v13; // rax
  __int64 v14; // rax
  char *v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rdi
  struct _EX_RUNDOWN_REF *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // r14
  char v21; // al
  __int64 v22; // rcx
  void (__fastcall *v23)(unsigned __int64, unsigned __int64, __int64); // rax
  __int64 v24; // r8
  void (__fastcall *v25)(struct _EX_RUNDOWN_REF *, unsigned __int64, __int64 *); // rax
  char **v26; // rcx
  unsigned __int64 v27; // [rsp+20h] [rbp-60h]
  void (__fastcall **v28)(struct _EX_RUNDOWN_REF *, unsigned __int64, __int64 *); // [rsp+28h] [rbp-58h]
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  int v30; // [rsp+38h] [rbp-48h]
  unsigned __int64 v31; // [rsp+40h] [rbp-40h]
  __int128 v32; // [rsp+48h] [rbp-38h]
  char *v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+60h] [rbp-20h]
  int v35; // [rsp+70h] [rbp-10h]
  char v36; // [rsp+C0h] [rbp+40h]
  PVOID Object; // [rsp+D8h] [rbp+58h] BYREF

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v7 = 0;
  Object = 0LL;
  Count = a1[226].Count;
  v9 = (PspNotifyEnableMask & 4) != 0;
  v28 = (void (__fastcall **)(struct _EX_RUNDOWN_REF *, unsigned __int64, __int64 *))ExtensionTable;
  v36 = 0;
  v27 = Count;
  if ( !a3 || (PspNotifyEnableMask & 4) == 0 && !ExtensionTable )
  {
    v16 = 0LL;
    goto LABEL_17;
  }
  v10 = 0;
  v29 = 72LL;
  if ( Count )
    v10 = 2;
  v30 = v10;
  v31 = a1[124].Count;
  v11 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v35 = 0;
  v32 = v11;
  if ( Count )
  {
    v33 = 0LL;
    v34 = 0LL;
    if ( !a2 )
      goto LABEL_16;
    v26 = *(char ***)(a2 + 448);
    if ( !v26 )
      goto LABEL_16;
    v33 = *v26;
    *(_QWORD *)&v34 = v26[1];
    v15 = v26[2];
  }
  else
  {
    if ( a2 && (v12 = *(char **)(a2 + 176)) != 0LL )
    {
      Object = *(PVOID *)(a2 + 176);
    }
    else
    {
      v36 = 1;
      PsReferenceProcessFilePointer(a1, (unsigned __int64 *)&Object);
      v12 = (char *)Object;
    }
    v33 = v12;
    if ( a2 && (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
    {
      v30 |= 1u;
      v13 = (char *)(a2 + 232);
    }
    else
    {
      v13 = v12 + 88;
    }
    *(_QWORD *)&v34 = v13;
    if ( !a2 || (v14 = *(_QWORD *)(a2 + 208)) == 0 )
    {
      *((_QWORD *)&v34 + 1) = 0LL;
      goto LABEL_16;
    }
    v15 = (char *)(v14 + 112);
  }
  *((_QWORD *)&v34 + 1) = v15;
LABEL_16:
  v16 = &v29;
LABEL_17:
  if ( (PspNotifyEnableMask & 2) != 0 || v9 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      v18 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v17);
      v19 = v18;
      if ( v18 )
      {
        v21 = ExGetCallBackBlockContext((__int64)v18);
        if ( !v27 || (v21 & 4) != 0 )
        {
          if ( (v21 & 2) != 0 )
          {
            if ( v9 )
            {
              v25 = (void (__fastcall *)(struct _EX_RUNDOWN_REF *, unsigned __int64, __int64 *))ExGetCallBackBlockRoutine(v22);
              v25(a1, a1[92].Count, v16);
            }
          }
          else
          {
            v23 = (void (__fastcall *)(unsigned __int64, unsigned __int64, __int64))ExGetCallBackBlockRoutine(v22);
            LOBYTE(v24) = a3;
            v23(a1[124].Count, a1[92].Count, v24);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v17, v19);
        if ( v16 )
        {
          if ( *((int *)v16 + 16) < 0 )
            break;
        }
      }
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= 0x40 )
        goto LABEL_21;
    }
    v7 = *((_DWORD *)v16 + 16);
    PsTerminateProcess(a1, v7);
  }
LABEL_21:
  if ( v28 )
  {
    (*v28)(a1, a1[92].Count, v16);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v36 )
    ObfDereferenceObject(Object);
  return v7;
}
