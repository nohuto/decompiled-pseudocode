/*
 * XREFs of ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01E4114
 * Callers:
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01E4590 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 * Callees:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall AddConvProp(
        struct tagWND *a1,
        struct tagWND *a2,
        int a3,
        struct tagDDECONV *a4,
        struct tagDDECONV *a5)
{
  __int16 v9; // dx
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v13; // [rsp+20h] [rbp-10h] BYREF
  struct tagDDECONV *Prop; // [rsp+28h] [rbp-8h]

  v13 = (char *)a4 + 24;
  Prop = (struct tagDDECONV *)GetProp((__int64)a1, atomDDETrack, 1);
  HMAssignmentLock(&v13);
  Prop = a1;
  v13 = (char *)a4 + 40;
  HMAssignmentLock(&v13);
  Prop = a2;
  v13 = (char *)a4 + 48;
  HMAssignmentLock(&v13);
  v13 = (char *)a4 + 32;
  Prop = a5;
  HMAssignmentLock(&v13);
  *((_QWORD *)a4 + 8) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  v9 = atomDDEImp;
  *((_DWORD *)a4 + 20) = a3;
  if ( (a3 & 1) == 0 )
    a2 = a1;
  v10 = GetProp((__int64)a2, v9, 1);
  if ( v10 )
    ++*(_WORD *)(v10 + 90);
  ++*((_DWORD *)a4 + 2);
  v11 = (unsigned __int16)atomDDETrack;
  *((_QWORD *)a4 + 11) = v10;
  InternalSetProp((__int64)a1, v11, (__int64)a4, 1);
  return 1LL;
}
