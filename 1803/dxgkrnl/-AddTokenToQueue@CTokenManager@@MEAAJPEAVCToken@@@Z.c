/*
 * XREFs of ?AddTokenToQueue@CTokenManager@@MEAAJPEAVCToken@@@Z @ 0x1C000F920
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C000BC44 (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C000E660 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueue(CTokenManager *this, struct CToken *a2)
{
  int v4; // ebx
  struct _RTL_GENERIC_TABLE *v5; // rbp
  _QWORD *inserted; // rdi
  CTokenQueue *v7; // rcx
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 NewElement; // [rsp+58h] [rbp+10h] BYREF
  struct CTokenQueue *v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 160LL))(a2) )
  {
    v7 = (CTokenManager *)((char *)this + 304);
    goto LABEL_6;
  }
  v5 = (struct _RTL_GENERIC_TABLE *)((char *)this + 192);
  Buffer[0] = *((_QWORD *)a2 + 4);
  Buffer[1] = 0LL;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), Buffer, 0x10u, &NewElement);
  if ( inserted )
  {
    if ( NewElement )
    {
      v4 = CTokenQueue::Create(&v11);
      if ( v4 < 0 )
      {
        RtlDeleteElementGenericTable(v5, inserted);
        inserted = 0LL;
      }
      else
      {
        inserted[1] = v11;
      }
    }
  }
  else
  {
    v4 = -1073741801;
  }
  if ( v4 >= 0 )
  {
    v7 = (CTokenQueue *)inserted[1];
LABEL_6:
    CTokenQueue::AddToken(v7, a2);
  }
  return (unsigned int)v4;
}
