/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E47A8
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1C01E5FCC (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01E6124 (xxxFreeDdeConv.c)
 * Callees:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1)
{
  __int64 Prop; // rax
  __int64 v4; // rdx
  __int64 v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rdi
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  if ( !*((_QWORD *)a1 + 5) )
    return 0LL;
  Prop = GetProp(*((_QWORD *)a1 + 5), atomDDETrack, 1);
  if ( !Prop )
    return 0LL;
  if ( (struct tagDDECONV *)Prop != a1 )
  {
    while ( 1 )
    {
      v7 = Prop;
      Prop = *(_QWORD *)(Prop + 24);
      if ( !Prop )
        return 0LL;
      if ( (struct tagDDECONV *)Prop == a1 )
      {
        v13[0] = v7 + 24;
        v8 = (char *)a1 + 24;
        v13[1] = *((_QWORD *)a1 + 3);
        HMAssignmentLock(v13);
        goto LABEL_11;
      }
    }
  }
  v8 = (char *)a1 + 24;
  v9 = *((_QWORD *)a1 + 3);
  if ( v9 )
    InternalSetProp(v5, v4, v9, v6);
  else
    InternalRemoveProp(v5, v4, v6);
LABEL_11:
  v10 = HMAssignmentUnlock(v8);
  v11 = (*((_DWORD *)a1 + 2))-- == 1;
  v12 = v10;
  if ( v11 )
    HMUnlockObjectInternal(a1);
  return (struct tagDDECONV *)v12;
}
