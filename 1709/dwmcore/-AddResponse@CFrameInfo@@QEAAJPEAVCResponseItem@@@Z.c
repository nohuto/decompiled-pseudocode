/*
 * XREFs of ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z @ 0x18012A078
 * Callers:
 *     ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItem@@@Z @ 0x180126370 (-AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItem@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFrameInfo::AddResponse(CFrameInfo *this, struct CResponseItem *a2)
{
  unsigned int v2; // edx
  char *v3; // r10
  __int64 v4; // rcx
  unsigned int v5; // eax
  signed int v6; // ebx
  signed int v7; // eax
  struct CResponseItem *v8; // rax
  unsigned int v10; // [rsp+40h] [rbp+8h]
  struct CResponseItem *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = v10;
  v3 = (char *)this + 1240;
  v4 = *((unsigned int *)this + 316);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    v2 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( v2 > *((_DWORD *)v3 + 5) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8u, 1, &v11);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) = v11;
    *((_DWORD *)v3 + 6) = v2;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x6Eu);
  }
  else
  {
    v8 = v11;
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    ++*((_DWORD *)v8 + 4);
  }
  return (unsigned int)v6;
}
