/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F07D8
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1C01F2000 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01F2168 (xxxFreeDdeConv.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     HMUnlockObject @ 0x1C00CF2F0 (HMUnlockObject.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1)
{
  __int64 v3; // rsi
  __int64 Prop; // rax
  __int64 v5; // r11
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rbx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  if ( !*((_QWORD *)a1 + 5) )
    return 0LL;
  v3 = (unsigned __int16)atomDDETrack;
  Prop = GetProp(*((_QWORD *)a1 + 5), atomDDETrack, 1);
  if ( !Prop )
    return 0LL;
  if ( (struct tagDDECONV *)Prop != a1 )
  {
    while ( 1 )
    {
      v6 = Prop;
      Prop = *(_QWORD *)(Prop + 24);
      if ( !Prop )
        return 0LL;
      if ( (struct tagDDECONV *)Prop == a1 )
      {
        v10[0] = v6 + 24;
        v7 = (char *)a1 + 24;
        v10[1] = *((_QWORD *)a1 + 3);
        HMAssignmentLock(v10);
        goto LABEL_11;
      }
    }
  }
  v7 = (char *)a1 + 24;
  v8 = *((_QWORD *)a1 + 3);
  if ( v8 )
    InternalSetProp(v5, v3, v8, 1);
  else
    InternalRemoveProp(v5, v3, 1LL);
LABEL_11:
  v9 = HMAssignmentUnlock(v7);
  HMUnlockObject((__int64)a1);
  return (struct tagDDECONV *)v9;
}
