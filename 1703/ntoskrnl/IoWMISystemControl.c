/*
 * XREFs of IoWMISystemControl @ 0x14055C374
 * Callers:
 *     WmipSystemControl @ 0x14055C360 (WmipSystemControl.c)
 * Callees:
 *     WmipFindRegEntryByProviderId @ 0x14006E798 (WmipFindRegEntryByProviderId.c)
 *     WmipUnreferenceRegEntry @ 0x14006E848 (WmipUnreferenceRegEntry.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WmipQueryWmiDataBlock @ 0x14055C6B0 (WmipQueryWmiDataBlock.c)
 *     IoWMICompleteRequest @ 0x14055C7A4 (IoWMICompleteRequest.c)
 *     WmipFindGuid @ 0x14055D01C (WmipFindGuid.c)
 *     WmipQueryWmiRegInfo @ 0x1405D6260 (WmipQueryWmiRegInfo.c)
 */

__int64 __fastcall IoWMISystemControl(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 p_OutboundQuota; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // r10
  unsigned int v7; // r13d
  int v8; // esi
  UCHAR MinorFunction; // r15
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r14
  unsigned int LowPart; // r12d
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned int v14; // eax
  char *v15; // rcx
  int v16; // r12d
  unsigned int v18; // esi
  unsigned int v20; // r13d
  int v21; // eax
  void *v22; // r8
  int v23; // edx
  __int16 v24; // r11
  int v25; // eax
  _WORD *v26; // r10
  unsigned int v27; // eax
  unsigned int v28; // r9d
  unsigned int v29; // r15d
  unsigned int v30; // ecx
  __int64 *p_CompletionMode; // rcx
  __int64 v32; // r12
  __int64 v33; // r9
  __int64 *v34; // r8
  int v35; // eax
  int v36; // eax
  _WORD *v37; // rcx
  unsigned int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 RegEntryByProviderId; // rax
  __int64 v44; // [rsp+48h] [rbp-30h] BYREF
  void *Src; // [rsp+50h] [rbp-28h]
  _QWORD v46[4]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v47; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v48; // [rsp+C8h] [rbp+50h]
  unsigned __int16 *v49; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v50; // [rsp+D8h] [rbp+60h]

  v48 = a2;
  v47 = a1;
  p_OutboundQuota = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a2;
  LODWORD(v47) = 0;
  v7 = 0;
  LODWORD(v49) = 0;
  v8 = 0;
  LODWORD(v50) = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xBu
    || CurrentStackLocation->Parameters.WMI.ProviderId != a2
    || MinorFunction != 11 && MinorFunction != 8 && !WmipGuidList )
  {
    v18 = -1073741808;
    goto LABEL_51;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( MinorFunction == 11 || MinorFunction == 8 )
  {
LABEL_12:
    v12 = MinorFunction;
    if ( MinorFunction <= 5u )
    {
      if ( MinorFunction != 5 )
      {
        if ( !MinorFunction )
        {
          if ( LowPart >= 0x3C )
          {
            if ( v7 > 1 )
            {
              LODWORD(v13) = v48;
LABEL_18:
              if ( v8 )
              {
                Parameters[1].ReadMode &= ~0x10u;
                v14 = (8 * v8 + 67) & 0xFFFFFFF8;
                Parameters[1].MaximumInstances = v8;
                Parameters[1].CompletionMode = v14;
                if ( v14 > LowPart )
                {
                  v15 = 0LL;
                  v16 = 0;
                }
                else
                {
                  p_OutboundQuota = (__int64)&Parameters[1].OutboundQuota;
                  v15 = (char *)Parameters + v14;
                  v16 = LowPart - v14;
                }
                return (unsigned int)WmipQueryWmiDataBlock(v13, (int)a3, v7, 0, v8, p_OutboundQuota, v16, v15);
              }
              else
              {
                return (unsigned int)IoWMICompleteRequest(v12, a2, a3, 3221226134LL, 0);
              }
            }
            RegEntryByProviderId = WmipFindRegEntryByProviderId(Parameters->ReadMode);
            if ( RegEntryByProviderId )
            {
              v13 = *(_QWORD *)(RegEntryByProviderId + 16);
              if ( v7 )
                v8 = 1;
              else
                v8 = *(_DWORD *)(RegEntryByProviderId + 52);
              WmipUnreferenceRegEntry(RegEntryByProviderId);
              goto LABEL_18;
            }
            return (unsigned int)IoWMICompleteRequest(v41, v40, a3, 3221226133LL, 0);
          }
          return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, 3221225507LL, 60);
        }
        if ( MinorFunction == 1 )
        {
          if ( v7 > 1 )
          {
            LODWORD(v42) = v48;
          }
          else
          {
            v39 = WmipFindRegEntryByProviderId(Parameters->ReadMode);
            if ( !v39 )
              return (unsigned int)IoWMICompleteRequest(v41, v40, a3, 3221226133LL, 0);
            v42 = *(_QWORD *)(v39 + 16);
            WmipUnreferenceRegEntry(v39);
          }
          return (unsigned int)WmipQueryWmiDataBlock(
                                 v42,
                                 (int)a3,
                                 v7,
                                 v50,
                                 1,
                                 (__int64)&Parameters[1].OutboundQuota,
                                 LowPart - Parameters[1].InboundQuota,
                                 (char *)Parameters + Parameters[1].InboundQuota);
        }
        if ( MinorFunction != 2 && MinorFunction != 3 )
        {
          if ( MinorFunction != 4 )
            return (unsigned int)-1073741808;
          goto LABEL_82;
        }
        v18 = -1073741114;
        a3->IoStatus.Status = -1073741114;
LABEL_83:
        a3->IoStatus.Information = 0LL;
        goto LABEL_52;
      }
LABEL_82:
      v18 = 0;
      a3->IoStatus.Status = 0;
      goto LABEL_83;
    }
    if ( MinorFunction == 6 || MinorFunction == 7 )
      goto LABEL_82;
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction == 9 )
      {
        v18 = -1073741808;
        a3->IoStatus.Status = -1073741808;
        goto LABEL_83;
      }
      if ( MinorFunction != 11 )
        return (unsigned int)-1073741808;
    }
    LODWORD(v47) = 0;
    v44 = 0LL;
    Src = 0LL;
    v20 = 0;
    v21 = WmipQueryWmiRegInfo(v6, &v47, &v44, &v49);
    v22 = Src;
    v18 = v21;
    if ( v21 >= 0 )
    {
      v23 = v47;
      if ( (v47 & 0x20) == 0 && !Src )
      {
        v18 = -1073741808;
LABEL_50:
        a3->IoStatus.Information = v20;
LABEL_51:
        a3->IoStatus.Status = v18;
LABEL_52:
        IofCompleteRequest(a3, 0);
        return v18;
      }
      v24 = v44;
      if ( (v47 & 0x20) != 0 )
      {
        v25 = 0;
        v50 = 0LL;
      }
      else
      {
        v23 = v47 | 4;
        LODWORD(v47) = v47 | 4;
        v25 = (unsigned __int16)v44 + 2;
        v50 = 248LL;
      }
      v26 = v49;
      if ( !v49 )
      {
        v26 = v46;
        v46[0] = 0LL;
        v46[1] = 0LL;
        v49 = (unsigned __int16 *)v46;
      }
      v27 = v25 + 248;
      v28 = -1;
      v29 = -1;
      if ( v27 >= 0xF8 )
        v29 = v27;
      v18 = v27 < 0xF8 ? 0xC0000095 : 0;
      if ( v27 >= 0xF8 )
      {
        v30 = (unsigned __int16)*v26 + v29 + 2;
        if ( v30 >= v29 )
          v28 = (unsigned __int16)*v26 + v29 + 2;
        v18 = v30 < v29 ? 0xC0000095 : 0;
        if ( v30 >= v29 )
        {
          Parameters->NamedPipeType = v28;
          v18 = 0;
          if ( v28 > LowPart )
          {
            v20 = 4;
          }
          else
          {
            p_CompletionMode = (__int64 *)&Parameters[1].CompletionMode;
            v32 = 7LL;
            Parameters->ReadMode = 0;
            v20 = v28;
            Parameters->InboundQuota = 7;
            v33 = v50;
            v34 = &WmipGuidList[2];
            Parameters->MaximumInstances = 0;
            Parameters->CompletionMode = v29;
            do
            {
              *(_OWORD *)(p_CompletionMode - 3) = *((_OWORD *)v34 - 1);
              v35 = v23 | *((_DWORD *)v34 + 1);
              *p_CompletionMode = v33;
              *((_DWORD *)p_CompletionMode - 2) = v35;
              p_CompletionMode += 4;
              v36 = *(_DWORD *)v34;
              v34 += 3;
              *((_DWORD *)p_CompletionMode - 9) = v36;
              --v32;
            }
            while ( v32 );
            if ( (v23 & 4) != 0 )
            {
              LOWORD(Parameters[6].CompletionMode) = v24;
              memmove((char *)&Parameters[6].CompletionMode + 2, Src, (unsigned __int16)v44);
              v26 = v49;
            }
            v37 = (_WORD *)((char *)Parameters + v29);
            *v37 = *v26;
            memmove(v37 + 1, *((const void **)v49 + 1), *v49);
            v22 = Src;
          }
        }
      }
    }
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_50;
  }
  if ( (unsigned __int8)WmipFindGuid(
                          (unsigned int)WmipGuidList,
                          7,
                          CurrentStackLocation->Parameters.QueryDirectory.FileName,
                          (unsigned int)&v47,
                          (__int64)&v49) )
  {
    if ( (unsigned __int8)(MinorFunction - 1) <= 2u || MinorFunction == 9 )
    {
      LODWORD(v50) = Parameters[1].MaximumInstances;
      if ( (Parameters[1].ReadMode & 0x80u) == 0 )
      {
        v38 = -1073741162;
        goto LABEL_56;
      }
    }
    v7 = v47;
    v8 = (int)v49;
    v6 = v48;
    goto LABEL_12;
  }
  v38 = -1073741163;
LABEL_56:
  a3->IoStatus.Status = v38;
  IofCompleteRequest(a3, 0);
  return v38;
}
