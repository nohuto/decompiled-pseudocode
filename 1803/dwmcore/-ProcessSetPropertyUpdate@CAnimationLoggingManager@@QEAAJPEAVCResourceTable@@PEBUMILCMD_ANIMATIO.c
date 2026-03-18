/*
 * XREFs of ?ProcessSetPropertyUpdate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE@@@Z @ 0x1801811BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetPropertyUpdate(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE *a3)
{
  char *v3; // r10
  __int64 v4; // rax
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  v3 = (char *)this + 56;
  v11 = *(_QWORD *)((char *)a3 + 12);
  v12 = *((_DWORD *)a3 + 2);
  v4 = *((unsigned int *)this + 20);
  v5 = v4 + 1;
  v6 = (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( (int)v4 + 1 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)this + 19) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 0xCu, 1, &v11);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v7 = *(_QWORD *)v3;
    v8 = 3 * v4;
    *(_QWORD *)(v7 + 4 * v8) = v11;
    *(_DWORD *)(v7 + 4 * v8 + 8) = v12;
    *((_DWORD *)v3 + 6) = v5;
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA1u);
  else
    return 0;
  return (unsigned int)v6;
}
