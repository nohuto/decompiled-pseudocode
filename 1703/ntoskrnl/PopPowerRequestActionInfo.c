/*
 * XREFs of PopPowerRequestActionInfo @ 0x1404C7464
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     PoSetPowerRequestInternal @ 0x1400722B0 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x140072C50 (PoClearPowerRequestInternal.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404C7614 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PopClearSpecialRequest @ 0x1406C57EC (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1406C5970 (PopSetSpecialRequest.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  NTSTATUS v6; // eax
  char v8; // [rsp+50h] [rbp+8h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  IsAppContainerOrIdentifyLevelContext = ObReferenceObjectByHandle(
                                           *(HANDLE *)a1,
                                           0,
                                           PopPowerRequestObjectType,
                                           PreviousMode,
                                           &Object,
                                           0LL);
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    v4 = Object;
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( PreviousMode )
      {
        IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        {
          if ( !v8 )
            goto LABEL_6;
          IsAppContainerOrIdentifyLevelContext = -1073741790;
        }
LABEL_10:
        ObfDereferenceObject(v4);
        return (unsigned int)IsAppContainerOrIdentifyLevelContext;
      }
    }
    else if ( *(_DWORD *)(a1 + 8) == 4 && PreviousMode != 1 )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741637;
      goto LABEL_10;
    }
LABEL_6:
    v5 = *(unsigned int *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( v4[104] )
        v6 = PopSetSpecialRequest(v4, v5, *(_QWORD *)(a1 + 16));
      else
        v6 = PoSetPowerRequestInternal((__int64)v4, v5);
    }
    else if ( v4[104] )
    {
      v6 = PopClearSpecialRequest(v4, v5);
    }
    else
    {
      v6 = PoClearPowerRequestInternal((__int64)v4, v5);
    }
    IsAppContainerOrIdentifyLevelContext = v6;
    goto LABEL_10;
  }
  return (unsigned int)IsAppContainerOrIdentifyLevelContext;
}
