/*
 * XREFs of ?Describe@PropertyNode@Input@@UEBAKPEAGKK@Z @ 0x180031300
 * Callers:
 *     ?Describe@Property@Input@@UEBAKPEAGKK@Z @ 0x1800316F0 (-Describe@Property@Input@@UEBAKPEAGKK@Z.c)
 *     ?Describe@PropertyMap@Input@@UEBAKPEAGKK@Z @ 0x180031FB0 (-Describe@PropertyMap@Input@@UEBAKPEAGKK@Z.c)
 * Callees:
 *     ?StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18003301C (-StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x180033DC4 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall Input::PropertyNode::Describe(
        Input::PropertyNode *this,
        unsigned __int16 *a2,
        unsigned int a3,
        char a4)
{
  Input::PropertyInfo *v6; // rcx
  int v7; // edi
  unsigned int v9; // [rsp+30h] [rbp-148h]
  unsigned __int64 v10; // [rsp+40h] [rbp-138h] BYREF
  unsigned __int16 *v11; // [rsp+48h] [rbp-130h] BYREF
  unsigned __int16 v12[128]; // [rsp+50h] [rbp-128h] BYREF

  *a2 = 0;
  v6 = (Input::PropertyInfo *)*((_QWORD *)this + 3);
  v7 = a3;
  v10 = a3;
  if ( v6 && (a4 & 7) != 0 && Input::PropertyInfo::Describe(v6, v12, a3, a4) )
  {
    StringCchCatNExW(a2, a3, v12, 0x80uLL, &v11, &v10, v9);
    v7 = v10;
  }
  return a3 - v7;
}
