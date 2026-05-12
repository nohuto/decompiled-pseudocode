/*
 * XREFs of RaUnitAtaPassThroughValidateInput @ 0x1C0001CA4
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001724 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaUnitAtaPassThroughValidateInput(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // r15d
  __int64 Options; // rsi
  int v9; // ebx
  _IRP *MasterIrp; // rdx
  _IRP *v11; // rdi
  unsigned __int16 v12; // ax
  __int64 v13; // r8
  char v14; // al
  unsigned __int16 Size; // ax
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  unsigned __int64 v19; // r9
  unsigned int v20; // ecx
  unsigned __int16 v21; // ax
  _BYTE *v22; // rcx
  const char *i; // rdx
  __int128 v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  _IRP *v27; // [rsp+40h] [rbp-48h]
  _LIST_ENTRY *Flink; // [rsp+48h] [rbp-40h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v9 = 0;
  if ( IoIs32bitProcess(a2) )
  {
    if ( (unsigned int)Options < 0x28 )
      return 3221225485LL;
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp->Type == 40 )
    {
      Size = MasterIrp->Size;
      if ( (Size & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (Size & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
        return 3221225485LL;
      v11 = (_IRP *)&v24;
      v17 = *(_OWORD *)&MasterIrp->Type;
      Flink = MasterIrp->ThreadListEntry.Flink;
      v18 = *(_QWORD *)&MasterIrp->Flags;
      v27 = MasterIrp->AssociatedIrp.MasterIrp;
      v26 = *(&MasterIrp->Flags + 1);
      v24 = v17;
      v25 = v18;
      goto LABEL_7;
    }
    return 3221225561LL;
  }
  if ( (unsigned int)Options < 0x30 )
    return 3221225485LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v11 = MasterIrp;
  if ( MasterIrp->Type != 48 )
    return 3221225561LL;
  v12 = MasterIrp->Size;
  if ( (v12 & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (v12 & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
    return 3221225485LL;
LABEL_7:
  if ( a3 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    if ( (*(unsigned int *)(v13 + 152) & (__int64)v11->AssociatedIrp.MasterIrp) == 0 )
      goto LABEL_9;
    return 3221225485LL;
  }
  v19 = (unsigned __int64)v11->AssociatedIrp.MasterIrp;
  if ( (unsigned __int16)v11->Type > v19 && LODWORD(v11->MdlAddress) )
    return 3221225485LL;
  if ( v19 > 0xFFFFFFFF )
    return 3221225621LL;
  v20 = v19 + LODWORD(v11->MdlAddress);
  if ( v20 < (unsigned int)v19 )
    return 3221225621LL;
  v21 = v11->Size;
  if ( (v21 & 4) != 0 && v20 > (unsigned int)Options )
    return 3221225485LL;
  if ( (v21 & 2) != 0 && v20 > Length )
    return 3221225485LL;
  v13 = *(_QWORD *)(a1 + 8);
  if ( (*(unsigned int *)(v13 + 152) & ((unsigned __int64)MasterIrp + v19)) != 0 )
    return 3221225485LL;
LABEL_9:
  if ( (*(_DWORD *)(v13 + 152) & (__int64)v11->MdlAddress) != 0
    || (unsigned int)(HIDWORD(v11->MdlAddress) - 1) > 0x1A5DF )
  {
    return 3221225485LL;
  }
  if ( Length > (unsigned int)Options )
    memset((char *)MasterIrp + Options, 0, Length - (unsigned int)Options);
  v14 = BYTE6(v11->ThreadListEntry.Blink);
  if ( v14 != -76 )
  {
    if ( v14 != -15 )
      return 0LL;
    if ( !a3 )
    {
      if ( HIBYTE(WPP_MAIN_CB.SectorSize) )
      {
        if ( (unsigned int)Options >= 0x230 && LODWORD(v11->MdlAddress) >= 0x200 )
        {
          v22 = (char *)v11->AssociatedIrp.MasterIrp + (unsigned __int64)a2->AssociatedIrp.MasterIrp;
          if ( (*v22 & 1) == 0 )
          {
            for ( i = "AutoATAWindowsString12345678901";
                  *(unsigned __int8 *)i == i[v22 + 2 - "AutoATAWindowsString12345678901"];
                  ++i )
            {
              if ( (unsigned int)++v9 >= 0x20 )
                return 0LL;
            }
          }
        }
      }
    }
    return 3221225485LL;
  }
  if ( HIBYTE(WPP_MAIN_CB.SectorSize) )
    return 0LL;
  return 3221225659LL;
}
